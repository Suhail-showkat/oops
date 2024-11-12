#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0, rem;
    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {
        rem = n % 10;
        cout<<rem;
        // reverse = reverse * 10 + rem;
        n = n / 10;
    }
    //cout << "Reversed Number = " << reverse;
    
    return 0;
}