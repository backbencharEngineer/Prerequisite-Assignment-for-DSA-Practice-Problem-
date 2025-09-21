


#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    // Input three characters
    cout << "Enter three characters: ";
    cin >> ch1 >> ch2 >> ch3;

    // Display characters with ASCII codes
    cout << ch1 << " -> " << int(ch1) << endl;
    cout << ch2 << " -> " << int(ch2) << endl;
    cout << ch3 << " -> " << int(ch3) << endl;

    return 0;
}

