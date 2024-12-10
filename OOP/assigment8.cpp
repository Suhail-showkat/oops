#include <iostream>
using namespace std;

int main()
{
    double purchaseAmount, finalAmount;

    cout << "Enter the total purchase amount: ";
    cin >> purchaseAmount;

    finalAmount = (purchaseAmount < 100) ? purchaseAmount : (purchaseAmount >= 100 && purchaseAmount <= 500) ? purchaseAmount * 0.90
                                                        : (purchaseAmount > 500 && purchaseAmount <= 1000)   ? purchaseAmount * 0.85
                                                        : (purchaseAmount > 1000)                            ? purchaseAmount * 0.80
                                                                                                             : purchaseAmount;

    cout << "The total price after applying the discount is: Rs " << finalAmount << endl;

    return 0;
}
