#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    string result =
        (op == '+') ? to_string(num1 + num2) : (op == '-')                                                                   ? to_string(num1 - num2)
                                           : (op == '*')                                                                     ? to_string(num1 * num2)
                                           : (op == '/')                                                                     ? (num2 != 0 ? to_string(num1 / num2) : "Error: Division by zero")
                                           : (op == '%' && static_cast<int>(num1) == num1 && static_cast<int>(num2) == num2) ? (num2 != 0 ? to_string(static_cast<int>(num1) % static_cast<int>(num2)) : "Error: Division by zero")
                                                                                                                             : "Error: Invalid operator";

    cout << "Result: " << result << endl;

    return 0;
}
