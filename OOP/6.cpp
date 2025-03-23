#include <iostream>
using namespace std;

class Currency {
    int rupees, paise;
public:
    Currency(int r = 0, int p = 0) {
        rupees = r + p / 100;
        paise = p % 100;
    }

    Currency operator+(const Currency& c) {
        return Currency(rupees + c.rupees, paise + c.paise);
    }

    Currency operator-(const Currency& c) {
        int total1 = rupees * 100 + paise;
        int total2 = c.rupees * 100 + c.paise;
        int result = total1 - total2;
        return Currency(result / 100, result % 100);
    }

    void display() {
        cout << "Rs. " << rupees << "." << paise << endl;
    }
};

int main() {
    Currency c1(5, 75), c2(2, 50);
    Currency c3 = c1 + c2;
    Currency c4 = c1 - c2;
    c3.display();
    c4.display();
    return 0;
}
