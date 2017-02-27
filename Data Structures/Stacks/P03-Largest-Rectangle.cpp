#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    stack<int> sh;
    vector<int> s(n);
    int ans = 0, min = 10000000;
    for(int i = 0; i != n; ++i){
        cin >> s[i];
    }
    for(int i = 0; i != n; ++i){
        if(sh.empty() || s[i] >= s[sh.top()]){
            min = min < s[i] ? min : s[i];
            sh.push(i);
        }
        else{
            while(!sh.empty() && s[sh.top()] >= s[i]){
                int t1 = sh.top();
                sh.pop();
                int t2 = -1;
                if(!sh.empty()){
					t2 = sh.top();
				}
                int temp = (i - 1 - t2) * s[t1];
                ans = ans > temp ? ans : temp;
            }
            int temp = min * i;
            ans = ans > temp ? ans : temp;
            sh.push(i);
            min = min < s[i] ? min : s[i];
        }
    }
    while(!sh.empty()){
        int t1 = sh.top();
        int temp = (n - 1 - t1 + 1) * s[t1];
        ans = ans > temp ? ans : temp;
        sh.pop();
    }
    int temp = min * n;
    ans = ans > temp ? ans : temp;
    cout << ans << endl;
    return 0;
}