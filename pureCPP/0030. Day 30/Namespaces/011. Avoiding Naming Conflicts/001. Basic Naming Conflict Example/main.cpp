#include <iostream>

namespace A {
    void display() {
        std::cout << "Display from namespace A" << std::endl;
    }
}

namespace B {
    void display() {
        std::cout << "Display from namespace B" << std::endl;
    }
}

int main() {
    A::display();  // Calls display from namespace A
    B::display();  // Calls display from namespace B
    return 0;
}
