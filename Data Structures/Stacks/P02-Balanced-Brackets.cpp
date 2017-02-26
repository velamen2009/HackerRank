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


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        if(0 != s.size() % 2){
            cout << "NO" << endl;
            continue;
        }
        stack<char> brackets;
        for(int i = 0; i < s.size(); ++i){
            char c = s[i];
            if('(' == c || '[' == c || '{' == c){
                brackets.push(c);
            }
            else if(')' == c){
                if(brackets.empty() || '(' != brackets.top()){
                    brackets.push(c);
                    break;
                }
                else{
                    brackets.pop();
                }
            }
            else if(']' == c){
                if(brackets.empty() || '[' != brackets.top()){
                    brackets.push(c);
                    break;
                }
                else{
                    brackets.pop();
                }
            }
            else if('}' == c){
                if(brackets.empty() || '{' != brackets.top()){
                    brackets.push(c);
                    break;
                }
                else{
                    brackets.pop();
                }
            }
        }
        if(brackets.empty()){ cout << "YES" << endl; }
        else{ cout << "NO" << endl; }
    }
    return 0;
}