class Matrix{
public:
    Matrix operator +(const Matrix& B){
        Matrix C;
        C.a = vector<vector<int>>(a.size(), vector<int>(a[0].size(), 0));
        for(int i = 0; i < a.size(); ++i){
            for(int j = 0; j < a[0].size(); ++j){
                C.a[i][j] = a[i][j] + B.a[i][j];
            }
        }
        return C;
    }
    
    vector<vector<int>> a;
};