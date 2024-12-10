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

bool isValidDate(int day, int month, int year)
{
    if (year < 1 || month < 1 || month > 12 || day < 1)
    {
        return false;
    }

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(year) && month == 2)
    {
        daysInMonth[1] = 29;
    }

    return day <= daysInMonth[month - 1];
}

int calculateDayOfWeek(int day, int month, int year)
{
    if (month < 3)
    {
        month += 12;
        year -= 1;
    }
    int k = year % 100;
    int j = year / 100;
    int dayOfWeek = (day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) - 2 * j) % 7;
    return (dayOfWeek + 7) % 7;
}

int main()
{
    int day, month, year;
    cout << "Enter a date (DD-MM-YYYY): ";
    char dash1, dash2; // To handle the '-' separators
    cin >> day >> dash1 >> month >> dash2 >> year;

    if (!isValidDate(day, month, year))
    {
        cout << "Invalid date." << endl;
    }
    else
    {
        cout << "Valid date." << endl;

        int dayOfWeek = calculateDayOfWeek(day, month, year);

        switch (dayOfWeek)
        {
        case 0:
            cout << "The day is Saturday." << endl;
            break;
        case 1:
            cout << "The day is Sunday." << endl;
            break;
        case 2:
            cout << "The day is Monday." << endl;
            break;
        case 3:
            cout << "The day is Tuesday." << endl;
            break;
        case 4:
            cout << "The day is Wednesday." << endl;
            break;
        case 5:
            cout << "The day is Thursday." << endl;
            break;
        case 6:
            cout << "The day is Friday." << endl;
            break;
        }
    }

    return 0;
}
