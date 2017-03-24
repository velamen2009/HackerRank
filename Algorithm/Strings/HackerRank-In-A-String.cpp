nclude <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        int i = 0;
        for(int j = 0; j < s.size() && i< 10; ++j){
            if(s[j] == "hackerrank"[i]){
                ++i;
            }
        }
        cout << (i == 10 ? "YES" : "NO") << endl;
    }
    return 0;
}