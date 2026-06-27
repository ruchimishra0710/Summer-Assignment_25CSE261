#include <iostream>
using namespace std;

int main() {
    int n, r, sum=0 ;
    cout << "Enter the number" << endl;
    cin >> n;

    r = n;

    while(r > 0) {
        int digit = r % 10;

        int fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        r /= 10;
    }

    if(sum == n)
        cout << "The given number is a Strong Number";
    else
        cout << "The given number is not a Strong Number";

    return 0;
}
