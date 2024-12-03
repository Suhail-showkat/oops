/*
 Create the equivalent of a four-function calculator. The program should ask the user to
 enter a number, an operator, and another number. (Use floating point.) It should then
 carry out the specified arithmetical operation: adding, subtracting, multiplying, or divid
ing the two numbers. Use a switch statement to select the operation. Finally, display the
 result.
 When it finishes the calculation, the program should ask whether the user wants to do
 another calculation. The response can be ‘y’ or ‘n’. Some sample interaction with the
 program might look like this:
 Enter first number, operator, second number: 10 / 3
 Answer = 3.333333
 Do another (y/n)? y
 Enter first number, operator, second number: 12 + 100
 Answer = 112
 Do another (y/n)? n
*/
#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op, choice;

    do {
        cout << "Enter first number, operator, second number: ";
        cin >> num1 >> op >> num2;

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    cout << "Error: Division by zero is not allowed." << endl;
                    continue;
                }
                break;
            default:
                cout << "Invalid operator." << endl;
                continue;
        }

        cout << "Answer = " << result << endl;
        cout << "Do another (y/n)? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}
