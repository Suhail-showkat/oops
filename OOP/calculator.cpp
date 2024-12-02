#include <iostream>
using namespace std;


double add(double a, double b) {
    return a + b;
}


double subtract(double a, double b) {
    return a - b;
}


double multiply(double a, double b) {
    return a * b;
}


double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero is not allowed!" << endl;
        return 0;
    }
}


int modulo(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        cout << "Error: Modulo by zero is not allowed!" << endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    char operation;


    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter an operation (+, -, *, /, %): ";
    cin >> operation;


    switch (operation) {
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        case '%':
            // Modulo requires integers
            cout << "Result: " << modulo(static_cast<int>(num1), static_cast<int>(num2)) << endl;
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
    }

    return 0;
}
