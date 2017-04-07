nclude <bits/stdc++.h>

using namespace std;

int getWays(vector < int >& s, int d, int m){
    // Complete this function
    if(m > s.size()) return 0;
    int sum = 0, i = 0, ans = 0;
    for(; i < m; ++i){
        sum += s[i];
    }
    if(sum == d) ++ans;
    for(; i < s.size(); ++i){
        sum -= s[i - m];
        sum += s[i];
        if(sum == d) ++ans;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = getWays(s, d, m);
    cout<<result<<endl;
    return 0;
}

