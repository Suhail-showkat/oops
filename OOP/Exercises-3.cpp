/*
Operators such as >>, which read input from the keyboard, must be able to convert a
 series of digits into a number. Write a program that does the same thing. It should allow
 the user to type up to six digits, and then display the resulting number as a type long
 integer. The digits should be read individually, as characters, using getche().
 Constructing the number involves multiplying the existing value by 10 and then adding
 the new digit. (Hint: Subtract 48 or ‘0’ to go from ASCII to a numerical digit.)
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    char ch;
    long number = 0;

    cout << "Enter up to six digits: ";

    for (int i = 0; i < 6; ++i) {
        ch = getche(); 
        if (ch < '0' || ch > '9') { 
            cout << "\nInvalid input. Please enter digits only." << endl;
            return 1;
        }
        number = number * 10 + (ch - '0'); 
    }

    cout << "\nThe resulting number is: " << number << endl;

    return 0;
}
