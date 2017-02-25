#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> nums(n), dips, segs, segsLen;
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }
    int len = 0, start = 0;
    for(int i = 0; i < n - 1; ++i){
        if(nums[i] > nums[i + 1]){
            ++len;
            if(1 == len){
                start = i;
            }
        }
        else{
            if(0 == len){
                continue;
            }
            else if(1 == len){
                dips.push_back(start);
                len = 0;
            }
            else{
                segs.push_back(start);
                segsLen.push_back(len);
                len = 0;
            }
        }
    }
    if(1 == len){
        dips.push_back(n - 2);
    }
    else if(len > 1){
        segs.push_back(start);
        segsLen.push_back(len);
    }

    if(dips.empty() && segs.empty()){
        cout << "yes" << endl;
    }
    else if(dips.size() <= 2 && segs.empty()){
        //
        if(1 == dips.size()){
            if(2 == n){
                cout << "yes" << endl;
                cout << "swap 1 2" << endl;
            }
            else if(0 == dips[0]){
                if(nums[0] <= nums[2]){
                    cout << "yes" << endl;
                    cout << "swap 1 2" << endl;
                }
                else{
                    cout << "no" << endl;
                }
            }
            else if(n - 2 == dips[0]){
                if(nums[n - 1] >= nums[n - 3]){
                    cout << "yes" << endl;
                    cout << "swap " << n - 1 << " " << n << endl;
                }
                else{
                    cout << "no" << endl;
                }
            }
            else{
                if(nums[dips[0]] <= nums[dips[0] + 2] && nums[dips[0] + 1] >= nums[dips[0] - 1]){
                    cout << "yes" << endl;
                    cout << "swap " << dips[0] + 1 << " " << dips[0] + 2 << endl;
                }
                else{
                    cout << "no" << endl;
                }
            }
        }
        else{
            int first = dips[0], second = dips[1] + 1;
            if(0 == first && n - 1 == second){
                if(nums[second] <= nums[1] && nums[0] >= nums[n - 2]){
                    cout << "yes" << endl;
                    cout << "swap " << 1 << " " << n << endl;
                }
                else{
                    cout << "no" << endl;
                }
            }
            else if(0 == first){
                if(nums[second] <= nums[1] && nums[0] >= nums[second - 1] && nums[0] >= nums[second + 1]){
                    cout << "yes" << endl;
                    cout << "swap " << 1 << " " << second + 1 << endl;
                }
                else{
                    cout << "no" << endl;
                }
            }
            else if(n - 1 == second){
                if(nums[second] <= nums[first + 1] && nums[second] >= nums[first - 1] && nums[first] >= nums[second - 1]){
                    cout << "yes" << endl;
                    cout << "swap " << first + 1 << " " << n << endl;
                }
                else{
                    cout << "no" << endl;
                }
            }
            else{
                if(nums[second] <= nums[first + 1] && nums[second] >= nums[first - 1] && nums[first] >= nums[second - 1] && nums[first] <= nums[second + 1]){
                    cout << "yes" << endl;
                    cout << "swap " << first + 1 << " " << second + 1 << endl;
                }
                else{
                    cout << "no" << endl;
                }
            }
        }
    }
    else if(dips.empty() && 1 == segs.size()){
        int start = segs[0], curLen = segsLen[0] + 1;
        if(0 == start && start + curLen == n){
            cout << "yes" << endl;
            if(3 == curLen){
                cout << "swap " << 1 << " " << n << endl;
            }
            else{
                cout << "reverse " << 1 << " " << n << endl;
            }
        }
        else if(0 == start){
            if(nums[0] <= nums[curLen]){
                cout << "yes" << endl;
                if(3 == curLen){
                    cout << "swap " << 1 << " " << curLen << endl;
                }
                else{
                    cout << "reverse " << 1 << " " << curLen << endl;
                }
            }
            else{
                cout << "no" << endl;
            }
        }
        else if(start + curLen == n){
            if(nums[start - 1] <= nums[n - 1]){
                cout << "yes" << endl;
                if(3 == curLen){
                    cout << "swap " << start + 1 << " " << n << endl;
                }
                else{
                    cout << "reverse " << start + 1 << " " << n << endl;
                }
            }
            else{
                cout << "no" << endl;
            }
        }
        else{
            if(nums[start] <= nums[start + curLen] && nums[start + curLen - 1] >= nums[start - 1]){
                cout << "yes" << endl;
                if(3 == curLen){
                    cout << "swap " << start + 1 << " " << start + curLen << endl;
                }
                else{
                    cout << "reverse " << start + 1 << " " << start + curLen << endl;
                }
            }
            else{
                cout << "no" << endl;
            }
        }
    }
    else{
        cout << "no" << endl;
    }
    return 0;
}