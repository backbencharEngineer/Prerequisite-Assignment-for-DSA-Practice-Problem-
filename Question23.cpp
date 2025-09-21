/* 23. Write a program to calculate sum of first N even natural
numbers*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += 2 * i;     // the i-th even number is 2*i
    }

    cout << "Sum of first " << N << " even natural numbers = " << sum;
    return 0;
}

