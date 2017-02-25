
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
public:
    Box():length(0), breadth(0), height(0){}
    Box(int l, int b, int h) : length(l), breadth(b), height(h){}
    Box(const Box& b){
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }
    int getLength(){ return length; }
    int getBreadth (){ return breadth; }
    int getHeight (){ return height; }
    long long CalculateVolume(){
        long long rt = (long long) length * breadth * height;
        return rt;
    };
    bool operator<(Box& b){
        if(length < b.length){
            return true;
        }
        else if(breadth < b.breadth && length == b.length){
            return true;
        }
        else if(height < b.height && length == b.length && breadth == b.breadth){
            return true;
        }
        return false;
    }
private:
    int length;
    int breadth;
    int height;
};


ostream& operator<<(ostream& out, Box& B){
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}