using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector<string> rocks;
    for(int i = 0; i < N; ++i){
        string s;
        cin >> s;
        rocks.push_back(s);
    }
    set<char> dict;
    for(int i = 0; i < rocks[0].size(); ++i){
        dict.insert(rocks[0][i]);
    }
    int ans = 0;
    for(set<char>::iterator it = dict.begin(); it != dict.end(); ++it){
        char target = *it;
        bool isGem = true;
        for(int i = 1; i < N; ++i){
            if(std::string::npos == rocks[i].find(target)){
                isGem = false;
                break;
            }
        }
        if(isGem){
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}