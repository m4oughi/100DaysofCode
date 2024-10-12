#include <iostream>
using namespace std;

class Utility {
public:
    static void printMessage() {  // Static member function
        cout << "Hello from static function!" << endl;
    }
};

int main() {
    Utility::printMessage();  // Calling static function using the class name
    return 0;
}
