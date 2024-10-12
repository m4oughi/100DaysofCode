#include <iostream>
using namespace std;

class Math {
public:
    static int multiplier;  // Static data member
    static int multiply(int num) {  // Static member function
        return num * multiplier;
    }
};

// Initialize static data member
int Math::multiplier = 2;

int main() {
    // Access static member function via class
    cout << "Multiplication: " << Math::multiply(5) << endl;  // Output: 10

    // Modify static member from outside the class
    Math::multiplier = 3;
    cout << "Updated multiplication: " << Math::multiply(5) << endl;  // Output: 15

    return 0;
}
