#include <iostream>
using namespace std;

// ADT Operations
void deposit(double accounts[], double amount) {
    accounts[0] += amount;
    cout << "Deposit successful.\n";
}

void withdraw(double accounts[], double amount) {
    if (amount <= accounts[0]) {
        accounts[0] -= amount;
        cout << "Withdrawal successful.\n";
    } else {
        cout << "Insufficient balance.\n";
    }
}

void checkBalance(double accounts[]) {
    cout << "Current Balance: " << accounts[0] << endl;
}

int main() {
    double accounts[1] = {0};  // Array storing balance
    int choice;
    double amount;

    do {
        cout << "\n--- Bank Account Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                deposit(accounts, amount);
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                withdraw(accounts, amount);
                break;

            case 3:
                checkBalance(accounts);
                break;

            case 4:
                cout << "Thank you for using the system.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 4);

    return 0;
}
