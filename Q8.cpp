#include <iostream>
using namespace std;

int main() 
{
    int n, rev=0, r, p, og;

    cout << "Enter the number you want to check is palindrome or not" << endl;
    cin >> n;

    og = n;

    while ( n > 0 )
    {
    r = n % 10;
    rev = rev * 10 + r;
    n = n / 10; 
    }

     if ( rev == og ) 
    {
        cout << "The number is palindrome" << endl;
    }

    else 
    {
        cout << "The number is not palindrome" << endl;
    }

}