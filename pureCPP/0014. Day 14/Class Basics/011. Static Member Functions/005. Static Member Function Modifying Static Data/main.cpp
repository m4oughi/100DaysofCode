#include <iostream>
using namespace std;

class BankAccount {
private:
    static double interestRate;  // Static data member

public:
    // Static member function to modify static data member
    static void setInterestRate(double rate) {
        interestRate = rate;
    }

    static double getInterestRate() {
        return interestRate;
    }
};

// Initialize static data member
double BankAccount::interestRate = 3.5;

int main() {
    cout << "Initial Interest Rate: " << BankAccount::getInterestRate() << "%" << endl;

    // Modifying static data member using static function
    BankAccount::setInterestRate(4.0);
    cout << "Updated Interest Rate: " << BankAccount::getInterestRate() << "%" << endl;

    return 0;
}
