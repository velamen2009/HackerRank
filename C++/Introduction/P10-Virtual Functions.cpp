class Person{
public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
protected:
    string name;
    int age;
};

class Professor : public Person{
public:
    Professor(){
        ++professor_id;
    }
    void getdata(){
        // the name, age, and the marks 
        cin >> name >> age >> publications;
        cur_id = professor_id;
    }
    void putdata(){
        //name, age, publications and the cur_id 
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
private:
    int publications;
    int cur_id;
    static int professor_id;
};

int Professor::professor_id = 0;

class Student : public Person{
public:
    Student(){
        ++student_id;
    }
    void getdata(){
        // the name, age and publications
        cin >> name >> age;
        for(int i = 0; i < 6; ++i){ cin >> marks[i]; }
        cur_id = student_id;
    }
    void putdata(){
        // name, age, sum of the marks and the cur_id
        cout << name << " " << age << " ";
        int sum = 0;
        for(int i = 0; i < 6; ++i){ sum += marks[i]; }
        cout << sum << " " << cur_id;
        cout << endl;
    }
private:
    int marks[6];
    int cur_id;
    static int student_id;
};

int Student::student_id = 0;