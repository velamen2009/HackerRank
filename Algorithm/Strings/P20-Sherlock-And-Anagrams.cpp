#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(vector<int>& v1, vector<int>& v2){
    for(int i = 0; i < v1.size(); ++i){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

int anagram(string& s){
    int ans = 0;
	int len = s.size();
	for(int i = 0; i < len - 1; ++i){
		for(int l = 1; l < len; ++l){
			vector<int> dict(26);
			for(int k = 0; k < l; ++k){
				dict[int(s[k]) - 97]++;
			}
			vector<int> input(dict.begin(), dict.end());
			for(int k = i + l; k < len; ++k){
				dict[int(s[k - l]) - 97]--;
				dict[int(s[k]) - 97]++;
				if(isAnagram(dict, input)){
					++ans;
				}
			}
		}
	}
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    for(int i = 0; i < T; ++i){
        string s;
        cin >> s;
        cout << anagram(s) << endl;
    }
    return 0;
}