#include <iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter the number that you want to check is prime or not" << endl;
    cin >> n;

    for ( i = 2; i <= n; i++) {
    if ( n % i == 0) {
        cout << "The number is not Prime" << endl;
    }
    else {
        cout << "The number is Prime" << endl;
    }
    }
}