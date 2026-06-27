#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    cout << "Missing number = " << missing;

    return 0;
}