#include <iostream>

using namespace std;

int fibonacci(int n) {
    // Complete the function.
    if(n <= 1) return n;
    int a = 0, b = 1, c = 0;
    for(int i = 2; i <= n; ++i){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}