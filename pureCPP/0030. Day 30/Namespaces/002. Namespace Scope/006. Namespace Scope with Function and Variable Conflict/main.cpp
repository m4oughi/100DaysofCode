#include <iostream>

namespace Utilities {
    int value = 42;
    void display() {
        std::cout << "Utilities display function" << std::endl;
    }
}

int value = 100;  // Local scope variable

int main() {
    int value = 200;  // Function scope variable

    std::cout << "Local value: " << value << std::endl;  // Function scope takes precedence
    std::cout << "Global value: " << ::value << std::endl;  // Global scope access
    std::cout << "Namespace value: " << Utilities::value << std::endl;  // Namespace scope access
    Utilities::display();  // Calls function from the namespace

    return 0;
}
