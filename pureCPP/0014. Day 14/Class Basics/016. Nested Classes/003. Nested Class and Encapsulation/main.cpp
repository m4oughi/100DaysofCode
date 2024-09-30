#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    class Security {
    public:
        void accessAccount(BankAccount &account, double amount) {
            if (amount <= account.balance) {
                account.balance -= amount;
                cout << "Withdrawn: $" << amount << ". Remaining balance: $" << account.balance << endl;
            } else {
                cout << "Insufficient funds." << endl;
            }
        }
    };

    void displayBalance() const {
        cout << "Current balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount(1000.0);
    BankAccount::Security security;

    myAccount.displayBalance();
    security.accessAccount(myAccount, 250);
    myAccount.displayBalance();

    return 0;
}
