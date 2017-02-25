/*Write the class AddElements here*/
template <class T>
class AddElements{
public:
    AddElements(T t){ val = t; }
    T add(const T& t){
        return val + t;
    }
    T concatenate(const T& t){
        return val + t;
    }
private:
    T val;
};