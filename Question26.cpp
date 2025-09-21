/*Write a program to calculate sum of cubes of first N
natural numbers*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    long long sum = 0;           // use long long for bigger results
    for (int i = 1; i <= N; i++) {
        sum += i * i * i;        // add cube of each number
    }

    cout << "Sum of cubes of first " << N
         << " natural numbers = " << sum;
    return 0;
}

