/* Loops:
22. Write a program to calculate sum of first N natural numbers*/


#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int sum = 0;                  // to store total
    for (int i = 1; i <= N; i++)  // loop from 1 to N
        sum += i;                 // add each number to sum

    cout << "Sum of first " << N << " natural numbers = " << sum;
    return 0;
}

