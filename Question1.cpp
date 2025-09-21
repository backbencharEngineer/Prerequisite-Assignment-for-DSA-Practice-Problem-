/* Write a program to calculate average of three integers.
Numbers are given by the user.*/


#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Average = " << (a + b + c) / 3.0; // 3.0 for the correct value
    return 0;
}

