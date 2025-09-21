/* Write a program to calculate factorial of a number*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long fact = 1;        // use long long for large results
    for (int i = 1; i <= n; i++) {
        fact *= i;             // multiply each number to fact
    }

    cout << "Factorial of " << n << " = " << fact;
    return 0;
}

