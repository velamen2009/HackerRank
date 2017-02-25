#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string convert(string s){
    if(s == "12"){
        return "12";
    }
    else{
        char a = s[0] + 1;
        char b = s[1] + 2;
        string rt = "";
        rt += a;
        rt += b;
        return rt;
    }
}

int main(){
    string time;
    cin >> time;
    if(time.substr(time.length() - 2, 2) == "AM"){
        if(time.substr(0, 2) == "12"){
            cout<<"00"<<time.substr(2, time.length() - 4)<<endl;
        }
        else{
            cout<<time.substr(0, time.length() - 2)<<endl;          
        }

    }
    else{
        cout<<convert(time.substr(0, 2)) + time.substr(2, time.length() - 4)<<endl;
    }
    return 0;
}