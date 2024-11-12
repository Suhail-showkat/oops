#include <iostream>
using namespace std;

int main() {
    int num, n, digit, rev = 0;
    cout << "Enter a positive number: ";
    cin >> num;
    n = num;

    while (num != 0) {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }

    if (n == rev) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }

    return 0;
}