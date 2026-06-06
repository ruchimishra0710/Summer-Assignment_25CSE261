#include <iostream>
using namespace std;

int main() 
{
    int sum=0, n, i=1;

    cout << "Enter the number till which you want to calculate the sum" << endl;
    cin>> n;

    for (i=1; i<=n; i++) 
    {
        sum= sum + i;
    }

    cout << "The sum of first 'n' natural numbers is "<< sum << endl;
}