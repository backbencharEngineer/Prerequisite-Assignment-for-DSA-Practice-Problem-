 /*Write a program to input an ASCII code from the user and
print its corresponding character.
*/

#include <iostream>
using namespace std;

int main() {
    int code;

    
    cout << "Enter an ASCII code: "; // Input ASCII area
    cin >> code;

     
    cout << "Character for ASCII " << code << " is " << char(code); // Print area

    return 0;
}

