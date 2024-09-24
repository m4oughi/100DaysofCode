#include <iostream>

namespace FirstNamespace {
    struct Struct {
        void display() const {
            std::cout << "FirstNamespace Struct" << std::endl;
        }
    };
}

namespace SecondNamespace {
    struct Struct {
        void display() const {
            std::cout << "SecondNamespace Struct" << std::endl;
        }
    };
}

void display(const FirstNamespace::Struct& obj) {
    obj.display();
}

void display(const SecondNamespace::Struct& obj) {
    obj.display();
}

int main() {
    FirstNamespace::Struct firstObj;
    SecondNamespace::Struct secondObj;

    display(firstObj);   // Calls FirstNamespace version
    display(secondObj);  // Calls SecondNamespace version
}
