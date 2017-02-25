#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Contacts{
public:
    Contacts(){
        size = 0;
        vector<Contacts*> children2(26, NULL);
		children = children2;
    }
    void add(string s){
        add(s, 0);
    }
    int find(string s, int index){
        if(s.size() == index){ return size; }
        Contacts *child = children[indexAt(s[index])];
        if(NULL == child){
            return 0;
        }
        return child->find(s, index + 1);
    }
private:
    void add(string s, int index){
        ++size;
        if(s.size() == index) return;
        
        Contacts *child = children[indexAt(s[index])];
        if(child == NULL){
            children[indexAt(s[index])] = new Contacts();
        }
        children[indexAt(s[index])]->add(s, index + 1);
    }
    int indexAt(char c){
        return c - 'a';
    }
private:
    int size;
    vector<Contacts*> children;
};


int main(){
    int n;
    cin >> n;
    Contacts con;
    for(int a0 = 0; a0 < n; a0++){
        string op;
        string contact;
        cin >> op >> contact;
        if(op == "add"){
            con.add(contact);
        }
        else{
            cout << con.find(contact, 0) << endl;
        }
    }
    return 0;
}