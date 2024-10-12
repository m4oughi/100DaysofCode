#include <iostream>
using namespace std;

class Bank {
private:
    static int totalAccounts;  // Private static data member

public:
    static int getTotalAccounts() {  // Getter to access private static member
        return totalAccounts;
    }

    static void openAccount() {
        totalAccounts++;
    }
};

// Initialize private static member outside the class
int Bank::totalAccounts = 0;

int main() {
    Bank::openAccount();
    Bank::openAccount();

    // Access static member via a public method
    cout << "Total accounts opened: " << Bank::getTotalAccounts() << endl;  // Output: 2
    return 0;
}
