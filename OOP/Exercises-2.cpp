/*Write a temperature-conversion program that gives the user the option of converting
 Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use 
floating-point numbers. Interaction with the program might look like this:
 Type 1 to convert Fahrenheit to Celsius,
 2 to convert Celsius to Fahrenheit: 1
 Enter temperature in Fahrenheit: 70
 In Celsius that’s 21.111111
*/
#include <iostream>
#include <iomanip>

using namespace std;

void fahrenheitToCelsius() {
    double fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << "In Celsius that’s " << setprecision(7) << celsius << endl;
}

void celsiusToFahrenheit() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << "In Fahrenheit that’s " << setprecision(7) << fahrenheit << endl;
}

int main() {
    int choice;
    cout << "Type 1 to convert Fahrenheit to Celsius,\n";
    cout << "2 to convert Celsius to Fahrenheit: ";
    cin >> choice;

    if (choice == 1) {
        fahrenheitToCelsius();
    } else if (choice == 2) {
        celsiusToFahrenheit();
    } else {
        cout << "Invalid choice. Please run the program again." << endl;
    }

    return 0;
}
0