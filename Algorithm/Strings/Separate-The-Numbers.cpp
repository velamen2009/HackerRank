nclude <bits/stdc++.h>

using namespace std;

unsigned long long a2ull(string& s, int i, int j){
	long long ans = 0;
	for(int k = i; k < i + j; ++k){
		ans *= 10;
		unsigned long long temp = s[k] - '0';
		ans += temp;
	}
	return ans;
}

bool is_separable(unsigned long long& t, string& s){
    if(s.size() <= 1 || s[0] == '0'){
        return false;
    }
    int size = s.size();
    int l = 1;
    while(l <= size / 2){
        unsigned long long prev = -1;
        unsigned long long current = a2ull(s, 0, l);
        t = current;
        int i = l - 1;
        while(i <= size - 1){
            if(i == size - 1){
                return true;
            }
            if(i + l >= size || s[i + 1] == '0'){
                break;
            }
            
            prev = current;
  
            unsigned long long temp = a2ull(s, i + 1, l);
            if(prev + 1 == temp){
                current = temp;
                i += l;
            }
            else{
                if(i + l + 1 < size){
                    temp = a2ull(s, i + 1, l + 1);
                    if(prev + 1 == temp){
                        current = temp;
                        i += l + 1;
                        ++l;
                    }
                    else{
                        break;
                    }
                }
                else{
                    break;
                }
            }         
        }
        ++l;
    }
    return false;
}

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        unsigned long long t = 0;
        bool possible = is_separable(t, s);
        if(possible){
            cout << "YES " << t << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
