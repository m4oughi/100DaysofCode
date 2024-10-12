#include <iostream>
using namespace std;

class Bank {
public:
    static int totalCustomers;  // Static data member

    static void addCustomer() {  // Static member function
        totalCustomers++;
    }
};

// Initialize static data member
int Bank::totalCustomers = 0;

int main() {
    // Access static function via class
    Bank::addCustomer();
    Bank::addCustomer();

    cout << "Total customers: " << Bank::totalCustomers << endl;  // Output: 2
    return 0;
}
