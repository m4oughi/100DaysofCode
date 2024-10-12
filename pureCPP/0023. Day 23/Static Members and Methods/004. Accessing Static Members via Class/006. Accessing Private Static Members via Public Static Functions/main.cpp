#include <iostream>
using namespace std;

class Company {
private:
    static int totalEmployees;  // Private static data member

public:
    static void hireEmployee() {  // Public static member function
        totalEmployees++;
    }

    static int getTotalEmployees() {
        return totalEmployees;
    }
};

// Initialize private static data member
int Company::totalEmployees = 0;

int main() {
    // Access static function via class
    Company::hireEmployee();
    Company::hireEmployee();

    // Get value of private static member via public static function
    cout << "Total employees: " << Company::getTotalEmployees() << endl;  // Output: 2

    return 0;
}
