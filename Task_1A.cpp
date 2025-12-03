
#include<iostream>
using namespace std;
int main()
{
    int row, col, m, n;

    cout << "Enter Row : ";
    cin >> m;
    cout << "Enter Column : ";
    cin >> n;
    int mat1[m][n], mat2[n][m];

    cout << "Enter Elements of Matrix A:" << endl;

    for (row = 0; row < m; row++) {

        for (col = 0; col < n; col++){

            cin >> mat1[row][col];
        } 
        cout << endl;
    }
    for (row = 0; row < m; row++){

        for (col = 0; col < n; col++){

            mat2[col][row] = mat1[row][col];
        }
    }
    
    cout << "Transpose Matrix of A is" << endl ;
    for (row = 0; row < n; row++) {
      
        for (col = 0; col < m; col++){

          cout << mat2[row][col] << "  ";
        } 
        cout << endl;
    }
    return 0;
}
