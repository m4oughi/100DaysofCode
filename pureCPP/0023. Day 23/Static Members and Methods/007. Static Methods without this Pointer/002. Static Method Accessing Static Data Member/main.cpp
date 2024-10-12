#include <iostream>
using namespace std;

class Account {
public:
    static int totalAccounts;  // Static data member

    static void openAccount() {  // Static method
        totalAccounts++;  // Can access static members
    }
};

// Initialize static data member
int Account::totalAccounts = 0;

int main() {
    // Call static method to modify static member
    Account::openAccount();
    Account::openAccount();
    cout << "Total accounts: " << Account::totalAccounts << endl;  // Output: 2
    return 0;
}
