/* Write a program to calculate sum of squares of first N
natural numbers*/

#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i * i;   // add square of each number
    }

    cout << "Sum of squares of first " << N
         << " natural numbers = " << sum;
    return 0;
}

