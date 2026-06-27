#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100], str2[100];
    char temp[200];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
    {
        cout << "Not a rotation";
        return 0;
    }

    // concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // check if str2 is substring of temp
    if (strstr(temp, str2))
    {
        cout << "Strings are Rotation of each other";
    }
    else
    {
        cout << "Not a rotation";
    }

    return 0;
}