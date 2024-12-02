#include <iostream>
using namespace std;

// Function to reverse the digits of a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10); // Add the last digit to reversed
        num /= 10; // Remove the last digit
    }
    return reversed;
}

int main() {
    int number;

    do {
        // Input a positive integer
        cout << "Enter a positive integer (0 to exit): ";
        cin >> number;

        if (number > 0) {
            // Reverse the number and display the result
            cout << "Reversed number: " << reverseNumber(number) << endl;
        } else if (number < 0) {
            cout << "Please enter a positive integer!" << endl;
        }
    } while (number != 0); // Repeat until the user enters 0

    cout << "Program terminated." << endl;

    return 0;
}