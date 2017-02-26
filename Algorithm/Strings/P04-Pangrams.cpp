#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    getline(std::cin, s);
    vector<int> alpa(26, 0);
    for(int i = 0; i < s.size(); ++i){
        int index = tolower(s[i]) - 97;
        if(index >= 0 && index <= 25){
            alpa[index] += 1;
        }
    }
    bool isPangram = true;
    for(int i = 0; i < alpa.size(); ++i){
        if(0 == alpa[i]){
            isPangram = false;
            break;
        }
    }
    cout << (isPangram == true ? "pangram" : "not pangram") << endl;
    return 0;
}