#include <iostream>
using namespace std;

class BankAccount {
private:
    static int totalAccounts;  // Private static data member

public:
    static void openAccount() {  // Static member function to manipulate static data
        totalAccounts++;
    }

    static void showTotalAccounts() {
        cout << "Total accounts opened: " << totalAccounts << endl;
    }
};

// Initialize private static data member
int BankAccount::totalAccounts = 0;

int main() {
    BankAccount::openAccount();
    BankAccount::openAccount();
    BankAccount::showTotalAccounts();  // Output: Total accounts opened: 2
    return 0;
}
