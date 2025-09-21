
/* Write a program to input a character from the user and print
its ASCII code */


#include <iostream>
using namespace std;

int main() {
    char ch;

     
    cout << "Enter a character: "; // Input area
    cin >> ch;

    
    cout << "ASCII code of " << ch << " is " << int(ch); // Print ASCII value

    return 0;
}

