#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N, opt, x, max;
    cin >> N;
    stack<int> s;
    for(int i = 0; i < N; ++i){
        cin >> opt;
        if(1 == opt){
            cin >> x;
            if(s.empty()){
                max = x;
            }
            else{
                max = max >= x ? max : x;
            }
            s.push(x);
        }
        else if(2 == opt){
            if(s.top() < max){
                s.pop();
            }
            else{
                stack<int> temp;
                s.pop();
                if(!s.empty()){ max = s.top(); }
                while(!s.empty()){
                    max = max >= s.top() ? max : s.top();
                    temp.push(s.top());
                    s.pop();
                }
                while(!temp.empty()){
                    s.push(temp.top());
                    temp.pop();
                }
            }
        }
        else{
            cout << max << endl;
        }
    }
    return 0;
}