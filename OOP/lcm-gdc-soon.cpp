#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; ++i)
    {
        fact *= i;
    }
    return fact;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int choice;

    do
    {

        cout << "\nMenu: \n";
        cout << "1. Find the factorial of a number\n";
        cout << "2. Find the GCD of two numbers\n";
        cout << "3. Find the LCM of two numbers\n";
        cout << "4. Exit the program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            int num;
            cout << "Enter a positive integer: ";
            cin >> num;
            if (num < 0)
            {
                cout << "Factorial is not defined for negative numbers.\n";
            }
            else
            {
                cout << "Factorial of " << num << " is " << factorial(num) << endl;
            }
            break;
        }
        case 2:
        {

            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
            break;
        }
        case 3:
        {

            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;
            break;
        }
        case 4:

            cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
