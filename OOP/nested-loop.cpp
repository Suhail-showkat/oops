#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main()
{
    int number;

    do
    {

        cout << "Enter a positive integer (0 to exit): ";
        cin >> number;

        if (number > 0)
        {

            cout << "Reversed number: " << reverseNumber(number) << endl;
        }
        else if (number < 0)
        {
            cout << "Please enter a positive integer!" << endl;
        }
    } while (number != 0);

    cout << "Program terminated." << endl;

    return 0;
}