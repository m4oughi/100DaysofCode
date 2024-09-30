#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
        }
    }

    // No getter for balance, making it write-only
};

int main() {
    BankAccount account;
    account.setBalance(1500.00);
    // No direct access to balance
    return 0;
}
