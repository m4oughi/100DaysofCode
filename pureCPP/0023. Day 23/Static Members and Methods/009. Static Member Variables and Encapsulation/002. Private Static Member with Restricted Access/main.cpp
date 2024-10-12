#include <iostream>
using namespace std;

class BankAccount {
private:
    static double interestRate;  // Private static member variable

public:
    static void setInterestRate(double rate) {  // Setter function to modify static member
        if (rate > 0) {
            interestRate = rate;
        }
    }

    static double getInterestRate() {  // Getter function to access static member
        return interestRate;
    }
};

// Initialize the private static member
double BankAccount::interestRate = 0.05;  // 5% default interest rate

int main() {
    // Modify the static member using a public setter method
    BankAccount::setInterestRate(0.07);

    // Access the static member using a public getter method
    cout << "Current interest rate: " << BankAccount::getInterestRate() << endl;  // Output: 0.07
    return 0;
}
