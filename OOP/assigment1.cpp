#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double real1, imag1;
    cout << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imag1;

    double real2, imag2;
    cout << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imag2;

    double magnitude1 = sqrt(real1 * real1 + imag1 * imag1);
    double magnitude2 = sqrt(real2 * real2 + imag2 * imag2);

    if (magnitude1 > magnitude2)
    {
        cout << "The first complex number has a higher magnitude." << endl;
    }
    else if (magnitude1 < magnitude2)
    {
        cout << "The second complex number has a higher magnitude." << endl;
    }
    else
    {
        cout << "The two complex numbers have equal magnitudes." << endl;
    }

    return 0;
}
