/* WAP to take time as an input in below given format and
convert the time format and display the result as given
below.
User Input date format – “HH:MM” */





#include <iostream>

using namespace std;

int main() {
    int hour, minute;
    char colon;                     // to catch the ':' character

    cout << "Enter time (HH:MM): ";
    cin >> hour >> colon >> minute; // read numbers and skip the ':'

    cout << "Hour - " << hour
         << ", Minute - " << minute;
    return 0;
}

