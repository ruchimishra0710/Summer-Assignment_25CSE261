#include <iostream>
using namespace std;

int main()
{
    int n, digits=0;

    cout << "Enter the number you want to find the number of digits of" << endl;
    cin >> n;

    if (n == 0) 
    { 
        cout << "digit = 1";
    }
    
    else 
    {
        while ( n > 0)
        {
            n = n / 10;
            digits++;
        }
    }
    cout << "The number of digits in the number is " << digits << endl;
}