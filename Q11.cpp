#include <iostream>
using namespace std;

int main () {
    int n1, n2, r;

    cout << "Enter the first number: " << endl;
    cin >> n1;

    cout << "Enter the second number" << endl;
    cin >> n2;

    while (n2 != 0) {
    r = n1 % n2;
    n1 = n2;
    n2= r;
    }

    cout << "So, the GCD of the given two numbers is: " << n1 << endl;

    return 0;
}