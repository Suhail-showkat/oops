#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    string validity = (a != 0) ? "Valid coefficients." : "Invalid coefficients: 'a' must be non-zero.";
    if (a == 0)
    {
        cout << validity << endl;
        return 0;
    }

    double discriminant = b * b - 4 * a * c;
    cout << "Discriminant: " << discriminant << endl;

    if (discriminant > 0)
    {
        cout << "The roots are real and distinct." << endl;
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        cout << "The roots are real and equal." << endl;
        double root = -b / (2 * a);
        cout << "Root: " << root << endl;
    }
    else
    {
        cout << "The roots are imaginary." << endl;
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
