#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Contacts{
public:
    Contacts(){
        size = 0;
        vector<Contacts*> nodes(26, NULL);
        children = nodes;
    }
    
    void add(string s){
        add(s, 0);
    }
    
    int find(string s){
        return find(s, 0);
    }
private:
    void add(string s, int index){
        ++size;
        if(s.size() == index){
            return;
        }
        if(NULL == children[s[index] - 'a']){
            children[s[index] - 'a'] = new Contacts();
        }
        children[s[index] - 'a']->add(s, index + 1);
    }
    int find(string s, int index){
        if(s.size() == index) return size;
        Contacts* child = children[s[index] - 'a'];
        if(NULL == child){
            return 0;
        }
        return child->find(s, index + 1);
    }
private:
    int size;
    vector<Contacts*> children;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    string opt, name;
    Contacts contact;
    cin >> n;
    while(n--){
        cin >> opt >> name;
        if(opt == "add"){
            contact.add(name);
        }
        else{
            cout << contact.find(name) << endl;
        }
    }
    return 0;
}