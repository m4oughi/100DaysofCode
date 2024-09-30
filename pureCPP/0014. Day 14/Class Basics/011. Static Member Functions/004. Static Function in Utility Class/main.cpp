#include <iostream>
using namespace std;

class Utility {
public:
    static void printMessage() {
        cout << "Welcome to C++ Programming!" << endl;
    }

    static int square(int n) {
        return n * n;
    }
};

int main() {
    // Using static member functions without creating an object
    Utility::printMessage();
    cout << "Square of 5: " << Utility::square(5) << endl;
    return 0;
}
