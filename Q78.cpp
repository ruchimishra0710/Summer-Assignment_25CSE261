#include <iostream>
using namespace std;

int main()
{
    int a[10][10], transpose[10][10];
    int n;
    bool symmetric = true;

    cout << "Enter size of square matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Check symmetry
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = false;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    if (symmetric)
        cout << "Matrix is Symmetric";
    else
        cout << "Matrix is NOT Symmetric";

    return 0;
}