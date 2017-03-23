nclude <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    // your code goes here
    int worst = 0, best = 0;
    int min = score[0], max = score[0];
    for(int i = 1; i < n; ++i){
        if(score[i] > max){
            ++best;
            max = score[i];
        }
        if(score[i] < min){
            ++worst;
            min = score[i];
        }
    }
    cout << best << " " << worst << endl;
    return 0;
}
