#include <iostream>
#include <exception>
#include <string>

class InvalidAmountException : public std::exception {
private:
    std::string message;
public:
    InvalidAmountException(double amount) {
        message = "Error: Invalid amount " + std::to_string(amount) + "!";
    }

    const char* what() const noexcept override {
        return message.c_str();
    }
};

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void withdraw(double amount) {
        if (amount <= 0 || amount > balance)
            throw InvalidAmountException(amount);
        balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(500.0);
    
    try {
        account.withdraw(600);  // Invalid amount, throws exception
    } catch (const InvalidAmountException& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
