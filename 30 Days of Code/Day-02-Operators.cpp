#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double cost;
    int tip, tax;
    cin >> cost;
    cin >> tip;
    cin >> tax;
    int total = cost * (1 + double(tip)/100 + double(tax) / 100) + 0.5;
    printf("The total meal cost is %d dollars.", total);
    return 0;
}