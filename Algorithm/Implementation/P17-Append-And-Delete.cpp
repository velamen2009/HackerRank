#include <stdlib.h>
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
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k;
    cin >> k;
    if(abs((int)s.length() - (int)t.length()) > k){
        cout<<"No"<<endl;
    }
    else if(s.length() + t.length() <= k){
		cout<<"Yes"<<endl;
	}
    else{
        int i = 0;
        while(i < s.length() && i < t.length() && s[i] == t[i]){ ++i; }
        s = s.substr(i, s.length() - i);
        t = t.substr(i, t.length() - i);
        if(s.length() + t.length() > k){
            cout<<"No"<<endl;
        }
        else{
            int left = k - s.length() - t.length();
			if(0 == left % 2){
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}
        }
    }
    
    return 0;
}