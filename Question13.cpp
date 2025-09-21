/*Develop a program that takes a student's score (0-100) as
input and prints the corresponding grade (e.g., A, B, C, D, F)
based on a grading scale.*/

#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter score (0-100): "; //for all marks 
    cin >> score;

    if (score >= 90)
        cout << "Grade: A"; // for A grade
        
    else if (score >= 80)
        cout << "Grade: B"; // for grade b
        
    else if (score >= 70)
        cout << "Grade: C"; // for grade c
        
    else if (score >= 60)
        cout << "Grade: D"; // for grade d
        
    else
        cout << "Grade: F"; // for grade f

    return 0;
}

