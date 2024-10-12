#include <iostream>
using namespace std;

class Account {
private:
    static double interestRate;  // Private static data member

public:
    static void setInterestRate(double rate) {
        interestRate = rate;  // Setter for static data member
    }

    static double getInterestRate() {
        return interestRate;  // Getter for static data member
    }
};

// Initialize private static data member
double Account::interestRate = 4.5;

int main() {
    cout << "Initial interest rate: " << Account::getInterestRate() << endl;

    Account::setInterestRate(5.0);  // Modify the static member using a method
    cout << "Updated interest rate: " << Account::getInterestRate() << endl;

    return 0;
}
