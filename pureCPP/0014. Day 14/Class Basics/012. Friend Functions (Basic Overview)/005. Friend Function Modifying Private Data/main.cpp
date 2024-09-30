#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    Account(double b) : balance(b) {}

    // Friend function declaration
    friend void withdraw(Account&, double);
};

// Friend function definition
void withdraw(Account& acc, double amount) {
    acc.balance -= amount;
    cout << "Withdrawn: " << amount << ", New Balance: " << acc.balance << endl;
}

int main() {
    Account acc(1000);
    withdraw(acc, 200);
    return 0;
}
