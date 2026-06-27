#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the number" << endl;
    cin >> n;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        cout << "The given number is a Perfect Number";
    }
        
    else {
        cout << "the given number is not a Perfect Number";
    }

    return 0;
}