#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, key;
    int count = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to find frequency: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }

    cout << "Frequency of " << key << " = " << count;

    return 0;
}