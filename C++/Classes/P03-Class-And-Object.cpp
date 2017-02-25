// Write your Student class here
class Student{
public:
    void input(){
        cin >> scores[0] >> scores[1] >> scores[2] >> scores[3] >> scores[4];
    }
    int calculateTotalScore(){
        int sum = 0;
        for(int i = 0; i < 5; ++i){
            sum += scores[i];
        }
        return sum;
    }
private:
    int scores[5];
};