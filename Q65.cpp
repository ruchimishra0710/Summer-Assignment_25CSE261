#include <iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int n1, n2;

    cout << "Enter the number of elements in first array: ";
    cin >> n1;

    cout << "Enter the elements of first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in second array: ";
    cin >> n2;

    cout << "Enter the elements of second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        arr3[n1 + i] = arr2[i];
    }

    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}