#include <iostream>
using namespace std;

class Bank {
private:
    static int totalCustomers;  // Shared static data member

public:
    static void addCustomer() {
        totalCustomers++;  // Static method modifies shared static member
    }

    static void showTotalCustomers() {
        cout << "Total customers: " << totalCustomers << endl;
    }
};

// Initialize static data member
int Bank::totalCustomers = 0;

int main() {
    Bank::addCustomer();  // Add customers using static method
    Bank::addCustomer();

    Bank::showTotalCustomers();  // Output: Total customers: 2
    return 0;
}
