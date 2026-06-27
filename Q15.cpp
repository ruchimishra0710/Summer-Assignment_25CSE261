#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, r, m, d=0, sum=0 ;

    cout << "Enter the number" << endl;
    cin >> n;

    r = n;

    while ( r > 0) {
        d++;
        r /=10;
    }

    r = n;

    while ( r > 0) {
        m = r % 10;
        sum += pow(m, d);
        r /=10;
    }

    if (sum = n) {
        cout << "The number is Armstrong" << endl;
    }

    else {
        cout << "The number is not Armstrong" << endl;
    }

    return 0;

    }