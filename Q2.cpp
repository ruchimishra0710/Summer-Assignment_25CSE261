#include <iostream>
using namespace std;

int main()
{
    int n, i=1, product=1;

    cout << "Enter the number you want to find the multiplication table of " << endl;
    cin >> n;

    for (i=1; i<=10; i++)
    {
        product= n * i;

        cout << "The multiplication table of "<<n<< " is:"<< product << endl;
    }
}