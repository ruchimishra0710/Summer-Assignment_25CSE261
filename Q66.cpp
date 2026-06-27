#include <iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100];
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

    cout << "Union of arrays: ";

    // Print all elements of first array
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }

    // Print only unique elements from second array
    for (int i = 0; i < n2; i++)
    {
        bool found = false;

        for (int j = 0; j < n1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << arr2[i] << " ";
        }
    }

    return 0;
}