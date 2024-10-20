#include <iostream>

namespace {
    void display() {
        std::cout << "This function is inside an unnamed namespace" << std::endl;
    }
}

int main() {
    display();  // Can be accessed directly within the same file
    return 0;
}
