#include <iostream>

void display() {
    std::cout << "Global display function" << std::endl;
}

namespace Graphics {
    void display() {
        std::cout << "Graphics display function" << std::endl;
    }
}

int main() {
    display();  // Calls global scope function
    Graphics::display();  // Calls namespace scope function
    return 0;
}
