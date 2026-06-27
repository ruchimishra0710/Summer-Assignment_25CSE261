#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], diff[10][10];
    int r, c;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }

    // Subtracting matrices
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Difference of matrices:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}