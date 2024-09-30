#include <iostream>
using namespace std;

class SecureAccount {
private:
    int accountNumber;
    double balance;

public:
    SecureAccount(int accNo, double initialBalance) {
        if (initialBalance >= 0) {
            accountNumber = accNo;
            balance = initialBalance;
        } else {
            cout << "Invalid initial balance!" << endl;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    void displayBalance() const {
        cout << "Account Balance: $" << balance << endl;
    }
};

int main() {
    SecureAccount account(123456, 1000.00);

    account.deposit(500.00);
    account.withdraw(300.00);
    account.displayBalance();

    return 0;
}
