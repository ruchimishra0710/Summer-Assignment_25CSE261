#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, sum;
    bool found = false;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the required sum: ";
    cin >> sum;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "Pair found: " << arr[i] << " " << arr[j];
                found = true;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
    {
        cout << "No pair found";
    }

    return 0;
}