#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    int opt, x;
    stack<int> s1, s2;
    for(int i = 0; i < q; ++i){
        cin >> opt;
        if(1 == opt){
            cin >> x;
            s1.push(x);
        }
        else if(2 == opt){
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            s2.pop();
        }
        else{
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            cout << s2.top() << endl;
        }
    }
    return 0;
}