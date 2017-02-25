#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> dict;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(dict.find(arr[arr_i]) != dict.end()){
           dict[arr[arr_i]] += 1;
       }
       else{
           dict[arr[arr_i]] = 1;
       }
    }
    
    for(map<int, int>::iterator it = dict.begin(); it != dict.end(); ++it){
        cout<<n<<endl;
        n -= it->second;
    }
    return 0;
}