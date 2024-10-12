#include <iostream>
using namespace std;

class Account {
private:
    static int totalAccounts;  // Static member shared by all objects

public:
    static void setTotalAccounts(int count) {
        totalAccounts = count;  // Setter for static data member
    }

    static int getTotalAccounts() {
        return totalAccounts;  // Getter for static data member
    }
};

// Initialize static data member
int Account::totalAccounts = 0;

int main() {
    Account::setTotalAccounts(5);  // Set total accounts using class name

    Account acc1, acc2;
    cout << "Total accounts: " << acc1.getTotalAccounts() << endl;  // Output: 5
    cout << "Total accounts: " << acc2.getTotalAccounts() << endl;  // Output: 5

    Account::setTotalAccounts(10);  // Modify total accounts via class
    cout << "Updated total accounts: " << acc1.getTotalAccounts() << endl;  // Output: 10
    cout << "Updated total accounts: " << acc2.getTotalAccounts() << endl;  // Output: 10

    return 0;
}
