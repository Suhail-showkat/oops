#include <iostream>
using namespace std;

int main()
{
    int number, digit;
    int sum = 0, product = 1;

    cout << "Enter an integer: ";
    cin >> number;

    number = abs(number);

    while (number > 0)
    {
        digit = number % 10;
        sum += digit;
        product *= digit;
        number /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
    cout << "Product of digits: " << product << endl;

    return 0;
}
