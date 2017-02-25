
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
public:
    void display(){
        cout << width << " " << height << "\n";
    }
protected:
    int width;
    int height;
};

class RectangleArea : public Rectangle{
public:
    void read_input(){
        cin >> width >> height;
    }
    void display(){
        cout << width * height << "\n";
    }
};