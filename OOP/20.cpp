#include <iostream>
#include <iomanip>

using namespace std;

int main() {

 int fahrenheit, celsius;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << "In Celsius that’s " << setprecision(7) << celsius << endl;
    
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << "In Fahrenheit that’s " << setprecision(7) << fahrenheit << endl;

    
    return 0;
}
