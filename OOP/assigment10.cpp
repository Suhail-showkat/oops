#include <iostream>
using namespace std;

int main()
{
    double balance = 0.0;
    int option;
    double amount;

    do
    {
        cout << "\nSimple Banking System Menu:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Balance Inquiry" << endl;
        cout << "4. Exit" << endl;
        cout << "Please choose an option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount <= 0)
            {
                cout << "Invalid deposit amount. It must be greater than zero." << endl;
            }
            else
            {
                balance += amount;
                cout << "Deposited Rs " << amount << ". New balance: Rs " << balance << endl;
            }
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount <= 0)
            {
                cout << "Invalid withdrawal amount. It must be greater than zero." << endl;
            }
            else if (amount > balance)
            {
                cout << "Error: Insufficient balance. Your current balance is Rs " << balance << endl;
            }
            else
            {
                balance -= amount;
                cout << "Withdrew Rs " << amount << ". New balance: Rs " << balance << endl;
            }
            break;

        case 3:
            cout << "Your current balance is Rs " << balance << endl;
            break;

        case 4:
            cout << "Exiting the banking system. Thank you!" << endl;
            break;

        default:
            cout << "Invalid option. Please choose a valid option from the menu." << endl;
            break;
        }

    } while (option != 4);
    return 0;
}
