#include <iostream>
using namespace std;

int reverse = 0;

void reverseNumber(int n)
{
    if (n == 0)
        return;

    reverse = reverse * 10 + (n % 10);
    reverseNumber(n / 10);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    reverseNumber(num);

    cout << "Reversed number = " << reverse;

    return 0;
}