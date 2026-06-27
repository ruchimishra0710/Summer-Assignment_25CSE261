#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int even = 0, odd = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even elements = " << even << endl;
    cout << "Odd elements = " << odd;

    return 0;
}