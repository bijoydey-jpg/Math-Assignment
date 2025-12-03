#include<iostream>
using namespace std;
int main()
{
    int row, col, m;
    cout << "Enter Size of Square Matrix: ";
    cin >> m;
    int mat[m][m];
    cout << "Enter Elements of Matrix:" << endl;


    for (row = 0; row < m; row++) {
        for (col = 0; col < m; col++) {

            cin >> mat[row][col];
        } 
        cout << endl;
    }
    for (row = 0; row < m; row++){

        for (col = 0; col < m; col++){

            if (row > col){
                
                swap(mat[row][col], mat[col][row]);
            }
        }
    }
    cout << "Transpose Matrix is" << endl ;

    for (row = 0; row < m; row++){
    
        for (col = 0; col < m; col++){

            cout << mat[row][col] << "  ";
        } 
        cout << endl;
    }
    return 0;
}
