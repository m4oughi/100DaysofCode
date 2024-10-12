#include <iostream>
using namespace std;

class Utility {
public:
    static void printMessage() {  // Static member function
        cout << "Hello from static function!" << endl;
    }
};

int main() {
    // Call static function using class name
    Utility::printMessage();  // Output: Hello from static function!
    return 0;
}
