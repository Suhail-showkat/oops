#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            return (year % 400 == 0);
        }
        return true;
    }
    return false;
}

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
        cout << "The next 5 leap years are:" << endl;

        int count = 0;
        int nextYear = year + 1;

        while (count < 5)
        {
            if (isLeapYear(nextYear))
            {
                cout << nextYear << endl;
                count++;
            }
            nextYear++;
        }
    }

    return 0;
}
