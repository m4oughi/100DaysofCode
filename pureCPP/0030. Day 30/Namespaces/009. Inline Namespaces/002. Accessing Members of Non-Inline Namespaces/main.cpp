#include <iostream>

namespace Software {
    inline namespace Version1 {
        void display() {
            std::cout << "Version 1 display" << std::endl;
        }
    }

    namespace Version2 {
        void display() {
            std::cout << "Version 2 display" << std::endl;
        }
    }
}

int main() {
    Software::display();  // Calls Version1's display (inline)
    Software::Version2::display();  // Must specify Version2 explicitly
    return 0;
}
