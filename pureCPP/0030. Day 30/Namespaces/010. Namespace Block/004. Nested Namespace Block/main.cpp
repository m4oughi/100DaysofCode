#include <iostream>

namespace Library {
    namespace Version1 {
        void display() {
            std::cout << "Library Version 1" << std::endl;
        }
    }

    namespace Version2 {
        void display() {
            std::cout << "Library Version 2" << std::endl;
        }
    }
}

int main() {
    Library::Version1::display();  // Accessing nested namespace
    Library::Version2::display();  // Accessing nested namespace
    return 0;
}
