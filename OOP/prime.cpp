#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // Numbers <= 1 are not prime
    for (int i = 2; i * i <= num; ++i) { // Check divisors up to √num
        if (num % i == 0) return false; // If divisible, not prime
    }
    return true;
}

int main() {
    int n, current = 2; // Start checking from 2

    // Input the upper limit
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers less than or equal to " << n << " are:" << endl;

    // Print prime numbers using a while loop
    while (current <= n) {
        if (isPrime(current)) { // Check if the current number is prime
            cout << current << " ";
        }
        current++; // Move to the next number
    }
    cout << endl;

    return 0;
}