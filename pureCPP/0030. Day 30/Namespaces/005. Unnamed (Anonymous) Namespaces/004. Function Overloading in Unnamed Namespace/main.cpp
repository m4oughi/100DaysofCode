#include <iostream>

void display() {
    std::cout << "Global display function" << std::endl;
}

namespace {
    void display() {
        std::cout << "Unnamed namespace display function" << std::endl;
    }
}

int main() {
    display();  // Calls the unnamed namespace version
    ::display();  // Calls the global version
    return 0;
}
