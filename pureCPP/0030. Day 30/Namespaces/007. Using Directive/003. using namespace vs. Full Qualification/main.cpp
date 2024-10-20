#include <iostream>

namespace Library {
    void open() {
        std::cout << "Opening the library" << std::endl;
    }
}

int main() {
    Library::open();  // Fully qualified name

    using namespace Library;
    open();  // Simplified with using directive
    return 0;
}
