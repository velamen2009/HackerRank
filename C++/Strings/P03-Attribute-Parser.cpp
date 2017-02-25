#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iterator>

using namespace std;

vector<string> parse2(string str){
	std::istringstream buf(str);
    std::istream_iterator<std::string> beg(buf), end;
    std::vector<std::string> tokens(beg, end);
	vector<string> ans;
    int e = tokens[0].find_last_not_of(">");
    ans.push_back(tokens[0].substr(1, e));
	for(int i = 1; i + 2 < tokens.size(); i += 3){
		ans.push_back(tokens[i]);
		string val = tokens[i + 2];
		int found = val.find_last_of("\"");
		val = val.substr(1, found-1);
		ans.push_back(val);
	}
	//for(int i = )
	return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, Q;
    cin >> N >> Q;
    vector<string> contents;
    vector<string> queries;
    string t;
    getline(cin, t);
    for(int i = 0; i < N; ++i){
        string s;
        getline(cin, s);
        contents.push_back(s);
    }
    for(int i = 0; i < Q; ++i){
        string s;
        getline(cin, s);
        queries.push_back(s);
    }

    
    vector<string> tags;
    vector<string> values;
    string nestedTag = "", curTag = "";
    for(int i = 0; i < N; ++i){
        string curContent = contents[i];
        vector<string> rt = parse2(curContent);
        //end of tag
        if(0 == rt[0].find("\/")){
			if(nestedTag.find(".") == std::string::npos){
				nestedTag = "";
			}
			else{
				nestedTag = nestedTag.substr(0, nestedTag.find_last_of("."));
			}
            if("" == nestedTag){
                curTag = "";
            }
            else{
                if(std::string::npos == nestedTag.find_last_of(".")){
					curTag = nestedTag;
				}
				else{
					curTag = nestedTag.substr(nestedTag.find_last_of("."));
				}
            }
        }
        //<tag2 name = "Name1">
        else{
            string lineTag =  rt[0];
            if(nestedTag == ""){
                nestedTag = lineTag;
                curTag = lineTag;
            }
            else{
                 if(curTag != lineTag){
                     curTag = lineTag;
                     nestedTag += "." + lineTag;
                 }
            }
			for(int i = 1; i < rt.size(); i += 2){
				tags.push_back(nestedTag + "~" + rt[i]);
				values.push_back(rt[i + 1]);
			}
        }
    }
    for(int i = 0; i < Q; ++i){
        vector<string>::iterator it = find(tags.begin(), tags.end(), queries[i]);
        if(it != tags.end()){
            cout << values[distance(tags.begin(), it)] << endl;
        }
        else{
            cout << "Not Found!" << endl;
        }
    }
    return 0;
}