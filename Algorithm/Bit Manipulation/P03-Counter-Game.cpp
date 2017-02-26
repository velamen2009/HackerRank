#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        unsigned long long int n;
        cin >> n;
        --n;
        int k = 0;
        while(n){
            n &= (n - 1);
            ++k;
        }
        if(k & 1){
            cout << "Louise" << endl;
        }
        else{
            cout << "Richard" << endl;
        }
        //cout << (k % 2 != 0 ? "Louise" : "Richard") << endl;
    }
    return 0;
}



int setBits(unsigned long long int n) {
	int count = 0 ;
    while(n) {
    	n &= (n-1) ;
        count ++ ;
    }
    cout << count << endl;
    return count ;
}

int main1() {
    int t ;
    scanf("%d\n",&t) ;
    while(t--) {
        unsigned long long int n ;
        scanf("%llu\n",&n) ;
        n = 8;
        if (setBits(n-1) & 1) printf("Louise\n") ;
        else printf("Richard\n") ;
    }
    return 0;
}