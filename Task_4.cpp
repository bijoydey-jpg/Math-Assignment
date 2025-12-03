#include <iostream>
using namespace std;
void addition(int a[][100], int b[][100], int add[][100], int r1, int c1)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
        }
    }
}
void subtraction(int a[][100], int b[][100], int sub[][100], int r1, int c1)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
}
void multiplication(int a[][100], int b[][100], int mul[][100], int r1, int c1, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main()
{
    int r1, c1, r2, c2;
    int a[100][100], b[100][100], add[100][100], sub[100][100], mul[100][100];
    cout << "Enter the first row and col : " << endl;
    cin >> r1 >> c1;
    cout << "Enter the second row and col : " << endl;
    cin >> r2 >> c2;

    cout << "Enter the first Matrix Elements : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the second Matrix Elements : " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }

    if (r1 == r2 && c1 == c2)
    {
        addition(a, b, add, r1, c1);
        cout << "---------MATRIX ADDITION----------" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << add[i][j] << " ";
            }
            cout << endl;
        }
        subtraction(a, b, sub, r1, c1);
        cout << "---------MATRIX SUBTRACTION----------" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << sub[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Addition and Subtraction not possible " << endl;
    }

    if (c1 == r2)
    {
        multiplication(a, b, mul, r1, c1, c2);
        cout << "---------MATRIX MILTIPLICATION----------" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << mul[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Multiplication not possible" << endl;
    }
}
