#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    // Count characters of first string
    for (int i = 0; str1[i] != '\0'; i++)
    {
        freq[str1[i]]++;
    }

    // Subtract characters of second string
    for (int i = 0; str2[i] != '\0'; i++)
    {
        freq[str2[i]]--;
    }

    // Check if all frequencies are zero
    bool isAnagram = true;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
        cout << "Strings are Anagrams";
    else
        cout << "Strings are NOT Anagrams";

    return 0;
}