#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

class Editor{
public:
    Editor() : s(""){}
    void append(string t){
        s += t;
        cmds.push(1);
        contents.push(t);
    }
    void remove(int k){
        string right = s.substr(s.size() - k);
        s = s.substr(0, s.size() - k);
        cmds.push(2);
        contents.push(right);
    }
    void print(int k){
        cout << s[k - 1] << endl;
    }
    void undo(){
        int opt = cmds.top();
        cmds.pop();
        string t = contents.top();
        contents.pop();
        if(1 == opt){
            int k = t.size();
            s = s.substr(0, s.size() - k);
        }
        else{
            s += t;
        }
    }
public:
    string s;
private:
    stack<int> cmds;
    stack<string> contents;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, opt, k;
    string s, content;
    Editor editor;
    
    cin >> n;
    while(n--){
        cin >> opt;
        //append
        if(1 == opt){
            cin >> content;
            editor.append(content);
        }
        //delete
        else if(2 == opt){
            cin >> k;
            editor.remove(k);
        }
        //print k
        else if(3 == opt){
            cin >> k;
            editor.print(k);
        }
        //undo
        else{
            editor.undo();
        }
    }
    return 0;
}