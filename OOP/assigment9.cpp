#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int originalNum = num, reversedNum = 0, remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main()
{
    int number, startRange, endRange;

    cout << "Enter a number to check if it is a palindrome: ";
    cin >> number;

    if (isPalindrome(number))
    {
        cout << number << " is a palindrome." << endl;
    }
    else
    {
        cout << number << " is not a palindrome." << endl;
    }

    cout << "Enter the range (start and end values) to find palindromes: ";
    cin >> startRange >> endRange;

    cout << "Palindrome numbers between " << startRange << " and " << endRange << " are:" << endl;
    for (int i = startRange; i <= endRange; i++)
    {
        if (isPalindrome(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
