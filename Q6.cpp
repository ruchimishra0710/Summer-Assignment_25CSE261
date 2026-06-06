#include <iostream>
using namespace std;

int main () 
{
    int n, rev=0, r;

     cout << " Enter the number you want to find reverse of" << endl;
     cin >> n;

     while (n > 0)
     {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
     }

     cout << "The reverse of the entered number is " << rev << endl;
}