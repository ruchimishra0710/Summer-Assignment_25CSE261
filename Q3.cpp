#include <iostream>
using namespace std;

int main() 
{
    int n, factorial=1, i=1;

    cout << "Enter the number you want to find factorial of" << endl;
    cin >> n;

    for (i=1; i<=n; i++) 
    {
        factorial= n * i;
    }

    cout << "The factorial of the number "<< n << " is "<< factorial << endl;
}