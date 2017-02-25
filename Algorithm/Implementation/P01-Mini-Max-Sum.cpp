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
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;
    long long sum = a + b + c + d + e;
    long int min = a, max = a;
    min = min > b ? b : min;
    min = min > c ? c : min;
    min = min > d ? d : min;
    min = min > e ? e : min;
    max = max < b ? b : max;
    max = max < c ? c : max;
    max = max < d ? d : max;
    max = max < e ? e : max;
    cout<<sum - max<<" "<<sum - min<<endl;
    return 0;
}