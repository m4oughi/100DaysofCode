#include <iostream>

class Account {
private:
    std::string owner;
    double balance;
    std::string type;
public:
    // Delegating constructor with default values
    Account() : Account("Unnamed", 0.0, "Savings") {
        std::cout << "Default constructor called." << std::endl;
    }

    // Delegating constructor with name only
    Account(std::string o) : Account(o, 0.0, "Savings") {
        std::cout << "Constructor with name only called." << std::endl;
    }

    // Delegating constructor with name and initial balance
    Account(std::string o, double b) : Account(o, b, "Savings") {
        std::cout << "Constructor with name and balance called." << std::endl;
    }

    // Primary constructor with full parameters
    Account(std::string o, double b, std::string t) : owner(o), balance(b), type(t) {
        std::cout << "Full constructor called for " << owner << ", type: " << type << ", balance: $" << balance << "." << std::endl;
    }
    
    void display() const {
        std::cout << "Account owner: " << owner << ", Type: " << type << ", Balance: $" << balance << std::endl;
    }
};

int main() {
    Account a1;                    // Default account
    a1.display();

    Account a2("Alice");            // Account with name only
    a2.display();

    Account a3("Bob", 500.0);       // Account with name and balance
    a3.display();

    Account a4("Charlie", 1000.0, "Checking");  // Full constructor
    a4.display();

    return 0;
}
