#include <iostream>

namespace Utilities {
    void printMessage() {
        std::cout << "This is a simple message." << std::endl;
    }
}

// Extending the Utilities namespace with a template function
namespace Utilities {
    template<typename T>
    void print(T value) {
        std::cout << "Printing value: " << value << std::endl;
    }
}

int main() {
    Utilities::printMessage();   // Calls the non-template function
    Utilities::print(100);       // Calls the template function with an int
    Utilities::print(3.14);      // Calls the template function with a double
    return 0;
}
