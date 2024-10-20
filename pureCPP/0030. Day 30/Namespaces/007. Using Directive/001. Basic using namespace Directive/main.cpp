#include <iostream>

namespace Utilities {
    void printMessage() {
        std::cout << "Hello from Utilities!" << std::endl;
    }
}

int main() {
    using namespace Utilities;  // Using the whole Utilities namespace
    printMessage();  // No need for Utilities::printMessage
    return 0;
}
