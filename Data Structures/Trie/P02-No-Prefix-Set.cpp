#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class MySet{
public:
    MySet(char c = ' ') : val(c), size(0), self(0){}
    bool add(string s){
        return add(s, 0);
    }
private:
    bool add(string s, int index){
        if(self == 1){
            return false;
        }
        ++size;
        if(s.size() == index){
            if(size > 1){ return false; }
            self = 1;
            return true;
        }
        MySet *child = getChild(s, index);
        if(NULL == child){
            child = new MySet(s[index]);
            children.push_back(child);
        }
        return child->add(s, index + 1);
    }
    MySet* getChild(string s, int index){
        for(int i = 0; i < children.size(); ++i){
            if(children[i]->val == s[index]){
                return children[i];
            }
        }
        return NULL;
    }
private:
    int size;
    int self;
    char val;
    vector<MySet*> children;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    string s;
    MySet mySet;
    while(n--){
        cin >> s;
        if(!mySet.add(s)){
            cout << "BAD SET\n";
            cout << s;
            return 0;
        }
    }
    cout << "GOOD SET\n";
    return 0;
}