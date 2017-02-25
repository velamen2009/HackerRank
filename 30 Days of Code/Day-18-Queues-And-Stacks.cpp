#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
public:
    void pushCharacter(char c){
        s.push(c);
    }
    void enqueueCharacter(char c){
        q.push(c);
    }
    char popCharacter(){
        char c = s.top();
        s.pop();
        return c;
    }
    char dequeueCharacter(){
        char c = q.front();
        q.pop();
        return c;
    }
private:
    stack<char> s;
    queue<char> q;
};