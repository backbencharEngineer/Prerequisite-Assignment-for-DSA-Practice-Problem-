//4. Write a program to calculate volume of a cuboid.



#include <iostream>
using namespace std;

int main() {
    float length, width, height, volume;

   
    cout << "Enter length: ";  // Input values 1
    cin >> length;
    cout << "Enter width: ";   // Input values 2
    cin >> width;
    cout << "Enter height: ";  // Input values 3
    cin >> height;

  
    volume = length * width * height;   // Formula

    
    cout << "Volume of cuboid = " << volume; // Output
    return 0;
}

