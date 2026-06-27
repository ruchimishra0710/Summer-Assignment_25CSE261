#include <iostream>
using namespace std;

int main()
{
    char str[200];
    int count = 1;

    cout << "Enter a sentence: ";
    cin.ignore();
    cin.getline(str, 200);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
        {
            count++;
        }
    }

    cout << "Number of words = " << count;

    return 0;
}