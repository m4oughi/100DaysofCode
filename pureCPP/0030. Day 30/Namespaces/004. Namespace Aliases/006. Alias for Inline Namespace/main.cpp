#include <iostream>

namespace Software {
    inline namespace Version1 {
        void run() {
            std::cout << "Running Version 1" << std::endl;
        }
    }

    namespace Version2 {
        void run() {
            std::cout << "Running Version 2" << std::endl;
        }
    }
}

// Alias for the inline namespace Version1
namespace V1 = Software::Version1;

int main() {
    V1::run();  // Accessing Version1 through alias
    Software::Version2::run();  // Direct access to Version2
    return 0;
}
