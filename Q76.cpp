#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n;
    int primary = 0, secondary = 0;

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

    for (int i = 0; i < n; i++)
    {
        primary += a[i][i];
        secondary += a[i][n - i - 1];
    }

    cout << "Primary diagonal sum = " << primary << endl;
    cout << "Secondary diagonal sum = " << secondary << endl;

    return 0;
}