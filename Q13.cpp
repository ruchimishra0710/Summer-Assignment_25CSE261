#include <iostream>
using namespace std;

int main () {
    int n, a= 0, b= 1, c, i;
    
    cout << "Enter the number" << endl;
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;

}