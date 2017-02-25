#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    cin>>T;
    for(int i = 0; i < T; ++i){
        int N, M, S;
        cin>>N>>M>>S;
        long a = S + M - 1;
        if(a > N){
            a %= N;
            if(0 == a){
                cout<<N<<"\n";
            }
            else{
                cout<<a<<endl;
            }
        }
        else{
            cout<<a<<"\n";
        }
    }
    return 0;
}