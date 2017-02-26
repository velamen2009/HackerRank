#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int p;
    cin >> p;
    string a, b, ans;
    for(int i = 0; i < p; ++i){
        cin >> a;
        cin >> b;
        vector<int> dict(26);
        ans = "NO";
        for(int j = 0; j < a.size(); ++j){
            dict[int(a[j]) - 97]++;
        }
        for(int j = 0; j < b.size(); ++j){
            if(dict[int(b[j]) - 97] > 0){
                ans = "YES";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}