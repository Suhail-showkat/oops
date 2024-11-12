#include <iostream>
using namespace std;
int main() {
    char ch;

    cout << "Enter an alphabet character: ";
    cin >> ch;

    ch = tolower(ch);

    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << std::endl;
    } else {
        cout << ch << " is not a vowel." << std::endl;
    }

    return 0;
 
}
