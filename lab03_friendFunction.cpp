//Friend Function
#include <iostream>
using namespace std;

class Matrix
{
    int rows, columns;
    int **arr;
    void _initZeros()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                arr[i][j] = 0;
            }
        }
    }

  public:
    Matrix(int r, int c) : rows(r), columns(c)
    {
        arr = new int *[rows];
        for (int i = 0; i < rows; i++)
            arr[i] = new int[columns];
        _initZeros();
    }
    void initialize()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << "Enter value in [" << i + 1
                     << "][" << j + 1 << "]\t:";
                cin >> arr[i][j];
            }
        }
    }

    void display()
    {
        cout << "\nThe Matrix is:" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
    }

    friend bool canMultiply(Matrix &a, Matrix &b)
    {
        return a.columns == b.rows;
    }

    friend Matrix &multiply(Matrix &a, Matrix &b) //Matrix &
    {
        int i(0), j(0), k(0);

        Matrix *m = new Matrix(a.rows, b.columns);
        for (i = 0; i < a.rows; i++)
        {
            for (j = 0; j < b.columns; j++)
            {
                for (k = 0; k < a.columns; k++)
                {
                    m->arr[i][j] += a.arr[i][k] * b.arr[k][j];
                }
            }
        }
        return *m;
    }
};

int main()
{
    int r1, r2, c1, c2;
    cout << "\nEnter rows in M1:\t";
    cin >> r1;
    cout << "\nEnter columns in M1:\t";
    cin >> c1;
    cout << "\nEnter rows in M2:\t";
    cin >> r2;
    cout << "\nEnter columns in M2:\t";
    cin >> c2;
    Matrix m1(r1, c1);
    Matrix m2(r2, c2);
    m1.initialize();
    m2.initialize();
    m1.display();
    m2.display();
    cout << "\n"
         << canMultiply(m1, m2) << endl;
    if(canMultiply(m1,m2)){
        Matrix m3 = multiply(m1, m2);
        m3.display();
    }
    return 0;
}