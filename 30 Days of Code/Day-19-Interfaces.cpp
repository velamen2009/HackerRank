//Write your code here

class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int sum = n;
        for (int i = 1, half = n/2; i <= half; i++) {
            if (n % i == 0) sum += i;
        }
        return sum;
    } 
};