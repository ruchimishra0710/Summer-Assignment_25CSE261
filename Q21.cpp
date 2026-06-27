#include <iostream>
#include <string>
using namespace std;

int main()
{
    int decimal;
    string binary = "";

    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0)
    {
        cout << "Binary = 0";
        return 0;
    }

    while (decimal > 0)
    {
        int remainder = decimal % 2;
        binary = char(remainder + '0') + binary;
        decimal = decimal / 2;
    }

    cout << "Binary = " << binary;

    return 0;
}