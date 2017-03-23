nclude <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    //vector<int> types(n);
    vector<int> count(6);
    for(int types_i = 0; types_i < n; types_i++){
       //cin >> types[types_i];
        cin >> x;
        count[x]++;
    }
    // your code goes here
    int ans = 1;
    for(int i = 2; i <= 5; ++i){
        if(count[i] > count[ans]){
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
