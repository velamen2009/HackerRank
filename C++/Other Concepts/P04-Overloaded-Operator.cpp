//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
Complex operator + (const Complex& A, const Complex& B){
    Complex C;
    C.a = A.a + B.a;
    C.b = A.b + B.b;
    return C;
}

ostream& operator<<(ostream& os, const Complex& A){
    os << A.a << "+i" << A.b;
    return os;
}