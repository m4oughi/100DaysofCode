#include <iostream>

namespace MyNamespace {
    int myVar = 10;

    void display() {
        std::cout << "Variable value: " << myVar << std::endl;
    }
}

int main() {
    MyNamespace::display();
    return 0;
}
