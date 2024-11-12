#include <iostream>
using namespace std;

int main() {
    int number, reverse = 0, remainder;

  
    cout << "Enter an integer: ";
    cin >> number;

   
    while (number != 0) {
        remainder = number % 10;        
        reverse = reverse * 10 + remainder; 
        number /= 10;                  
    }

   
    cout << "Reversed number: " << reverse << endl;

    return 0;
}
