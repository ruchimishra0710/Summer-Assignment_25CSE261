#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxFreq = 0;
    int element;

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > maxFreq)
        {
            maxFreq = count;
            element = arr[i];
        }
    }

    cout << "Element with maximum frequency = " << element << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}