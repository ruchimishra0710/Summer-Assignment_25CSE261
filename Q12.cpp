#include <iostream>
using namespace std;

int main() {
    int n1, n2, r, lcm, gcd;

    cout << "Enter the first number" << endl;
    cin >> n1;

    cout << "Enter the second number " << endl;
    cin >> n2;

    while ( n2 != 0) {
        r = n1 % n2;
        n1 = n2;
        n2 = r;
        gcd= n2;
    }

     
    cout << "So GCD= " << gcd << endl;

    //now calculating the lcm using the gcd calculated

    lcm= (n1 * n2)/ gcd;

    cout << "So the lcm is " << lcm << endl;

}