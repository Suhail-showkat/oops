/*Assume that you want to generate a table of multiples of any given number. Write a pro
gram that allows the user to enter the number and then generates the table, formatting it
 into 10 columns and 20 lines. Interaction with the program should look like this (only the
 first three lines are shown):
 Enter a number: 7
 7   14   21   28   35   42   49   56   63   70
 77   84   91   98  105  112  119  126  133  140
 147  154  161  168  175  182  189  196  203  210
*/
#include <iostream>
#include <iomanip>
using namespace std;

void generateTable()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    for (int row = 0; row < 20; ++row)
    {
        for (int col = 1; col <= 10; ++col)
        {
            int multiple = number * (row * 10 + col);
            cout << setw(5) << multiple << " ";
        }
        cout << endl;
    }
}

int main()
{
    generateTable();
    return 0;
}

