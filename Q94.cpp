#include <iostream>
using namespace std;

int main()
{
    char str[200];

    cout << "Enter a string: ";
    cin >> str;

    cout << "Compressed string: ";

    int count = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            cout << str[i] << count;
            count = 1;
        }
    }

    return 0;
}