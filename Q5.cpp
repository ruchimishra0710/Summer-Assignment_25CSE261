#include <iostream>
using namespace std;

int main()
{
    int n, sum=0, h;

    cout << "Enter the number you want to find sum of" << endl;
    cin >> n;

    while (n > 0)
    {
        h = n % 10;
        n = n / 10; 
        sum = sum + h;
    }
    
    cout << "The sum of the entered number is " << sum << endl;
}