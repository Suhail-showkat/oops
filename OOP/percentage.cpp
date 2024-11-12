#include <iostream>
using namespace std;

int main()
{
    float marks[5], sum = 0.0, percentage;

    cout << "Enter marks for 5 subjects (out of 100 each)\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    percentage = (sum / 500) * 100;

    cout << "Total Marks: " << sum << " / 500\n";
    cout << "Percentage: " << percentage << "%\n";

    return 0;
}
