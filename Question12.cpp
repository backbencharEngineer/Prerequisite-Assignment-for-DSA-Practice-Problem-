/* Create a program that takes a person's age as input and
classifies them into different age groups (e.g., child,
teenager, adult, senior).*/




#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 13)
        cout << "You are a Child";
    else if (age < 20)
        cout << "You are a Teenager";
    else if (age < 60)
        cout << "You are an Adult";
    else
        cout << "You are a Senior";

    return 0;
}

