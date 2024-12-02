#include <iostream>
using namespace std;

double calculateIncomeTax(double income) {
    double tax = 0.0;

    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.2;
    } else {
        tax = (250000 * 0.05) + (500000 * 0.2) + (income - 1000000) * 0.3;
    }

    return tax;
}

int main() {
    double annualIncome;

    cout << "Enter your annual income (in rs): ";
    cin >> annualIncome;

    double tax = calculateIncomeTax(annualIncome);
    cout << "Your income tax is: rs" << tax << endl;

    return 0;
}
