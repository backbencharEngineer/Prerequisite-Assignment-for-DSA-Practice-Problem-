/* Create a program that takes the lengths of three sides of a
triangle as input and determines whether the triangle is
equilateral, isosceles, or scalene.*/


#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check if the sides can form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
    	
        if (a == b && b == c)
        
            cout << "Equilateral Triangle";      // all sides equal
        else if (a == b || b == c || a == c)
            cout << "Isosceles Triangle";        // two sides equal
        else
            cout << "Scalene Triangle";          // all sides different
    } else {
        cout << "Not a valid triangle";
    }

    return 0;
}

