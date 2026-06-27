#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int freq[256] = {0};

    cout << "Enter a string: ";
    cin.getline(str, 200);

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    char maxChar = str[0];
    int maxFreq = 0;

    // Find maximum occurring character
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (freq[str[i]] > maxFreq)
        {
            maxFreq = freq[str[i]];
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character = " << maxChar << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}