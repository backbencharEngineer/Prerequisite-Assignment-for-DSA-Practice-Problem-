/*. Develop a program that takes four numbers as input and
prints the largest among them.*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    int largest = a;        // start by assuming 'a' is largest

    if (b > largest) largest = b;
    if (c > largest) largest = c;
    if (d > largest) largest = d;

    cout << "Largest number is: " << largest;
    return 0;
}

