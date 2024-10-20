#include <iostream>

namespace Library {
    inline namespace Version1 {
        void print() {
            std::cout << "Library Version 1" << std::endl;
        }
    }
}

int main() {
    Library::print();  // Calls Version1's print function without fully qualifying it
    return 0;
}
