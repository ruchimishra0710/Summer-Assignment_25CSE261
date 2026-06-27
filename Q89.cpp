#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int freq[256] = {0};

    cout << "Enter a string: ";
    cin.getline(str, 200);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    // Find first non-repeating character
    bool found = false;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (freq[str[i]] == 1)
        {
            cout << "First non-repeating character = " << str[i];
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "No non-repeating character found";
    }

    return 0;
}