class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
  		// Write your constructor
        Student(string firstName, string lastName, int identification, vector<int> scores) : Person(firstName, lastName, identification), testScores(scores) {
            
        }
  
  		// Write char calculate()
        string calculate(){
            int sum = 0;
            for(int i = 0; i < testScores.size(); ++i){
                sum += testScores[i];
            }
            int avg = sum / testScores.size();
            if(avg >= 90){
                return "O";
            }
            else if(avg >= 80){
                return "E";
            }
            else if(avg >= 70){
                return "A";
            }
            else if(avg >= 55){
                return "P";
            }
            else if(avg >= 40){
                return "D";
            }
            return "T";
        }
};