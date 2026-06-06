#include <iostream>
using namespace std;

int main () 
{
    int n, r, product=1;

    cout << "Enter the number you want to find the product of digits of " << endl;
    cin >> n;

    while ( n > 0) 
    {
        r = n % 10;
        product= product * r;
        n = n / 10;
    }
    
    cout << "The product of the digits of the given number is " << product << endl;
}