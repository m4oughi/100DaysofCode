#include <iostream>

namespace Utility {
    void printMessage() {
        std::cout << "Message from Utility namespace." << std::endl;
    }
}

int main() {
    using Utility::printMessage;  // Brings the function into global namespace
    printMessage();               // Now accessible without namespace qualification
    return 0;
}
