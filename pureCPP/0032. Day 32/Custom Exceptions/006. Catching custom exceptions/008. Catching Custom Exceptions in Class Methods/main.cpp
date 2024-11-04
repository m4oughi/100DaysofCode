#include <iostream>
#include <exception>
#include <string>

class TransactionError : public std::exception {
public:
    const char* what() const noexcept override {
        return "Transaction failed due to insufficient funds!";
    }
};

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void withdraw(double amount) {
        if (amount > balance)
            throw TransactionError();
        balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(500.0);

    try {
        account.withdraw(600);  // Throws custom exception
    } catch (const TransactionError& e) {
        std::cout << "Caught transaction error: " << e.what() << std::endl;
    }

    return 0;
}
