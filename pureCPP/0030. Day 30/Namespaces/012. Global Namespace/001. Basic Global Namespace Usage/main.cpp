#include <iostream>

void display() {
    std::cout << "This is a global namespace function." << std::endl;
}

int main() {
    display();  // Calls the global function directly
    return 0;
}
