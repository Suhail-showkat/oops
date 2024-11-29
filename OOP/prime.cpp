#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, current = 2;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers less than or equal to " << n << " are:" << endl;

    while (current <= n)
    {
        if (isPrime(current))
        {
            cout << current << " ";
        }
        current++;
    }
    cout << endl;

    return 0;
}