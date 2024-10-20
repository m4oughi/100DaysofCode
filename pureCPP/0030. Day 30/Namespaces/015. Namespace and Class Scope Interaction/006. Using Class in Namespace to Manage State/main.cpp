#include <iostream>

namespace Account {
    class BankAccount {
    private:
        double balance;
    public:
        BankAccount(double initialBalance) : balance(initialBalance) {}

        void deposit(double amount) {
            balance += amount;
            std::cout << "Deposited: " << amount << ", New balance: " << balance << std::endl;
        }

        double getBalance() {
            return balance;
        }
    };
}

int main() {
    Account::BankAccount myAccount(1000); // Creating a BankAccount object
    myAccount.deposit(500);                // Accessing class method
    std::cout << "Current balance: " << myAccount.getBalance() << std::endl; // Accessing class method
    return 0;
}
