#include <iostream>
using namespace std;

namespace Company {
    namespace DepartmentA {
        int calculate(int a, int b) {
            return a + b;
        }
    }

    namespace DepartmentB {
        double calculate(double a, double b) {
            return a * b;
        }
    }
}

int main() {
    cout << "DepartmentA Calculate (int): " << Company::DepartmentA::calculate(2, 3) << endl;  // Calls DepartmentA version
    cout << "DepartmentB Calculate (double): " << Company::DepartmentB::calculate(2.5, 3.5) << endl; // Calls DepartmentB version
    return 0;
}
