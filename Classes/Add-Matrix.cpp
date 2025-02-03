#include <iostream>
using namespace std;
class Matrix
{
private:
    int mat[2][2];

public:
    Matrix()
    {
        mat[0][0] = 0;
        mat[0][1] = 0;
        mat[1][0] = 0;
        mat[1][1] = 0;
    }
    Matrix(int a, int b, int c, int d)
    {
        mat[0][0] = a;
        mat[0][1] = b;
        mat[1][0] = c;
        mat[1][1] = d;
    }
    void display()
    {
        cout << mat[0][0] << " " << mat[0][1] << endl;
        cout << mat[1][0] << " " << mat[1][1] << endl;
    }
    Matrix operator+(const Matrix &obj)
    {
        return Matrix(
            mat[0][0] + obj.mat[0][0],
            mat[0][1] + obj.mat[0][1],
            mat[1][0] + obj.mat[1][0],
            mat[1][1] + obj.mat[1][1]);
    }
};
int main()
{
    Matrix mat1(1,2,3,4);
    Matrix mat2(2,4,6,8);
    cout<<"Matrix # 1"<<endl;
    mat1.display();
    cout<<"Matrix # 2"<<endl;
    mat2.display();
    Matrix mat3=mat1+mat2;
    cout<<"Matrix # 3 (Matrix1 + Matrix2)"<<endl;
    mat3.display();
    

    return 0;
}