#include <iostream>

namespace Framework {
    inline namespace Version1 {
        void initialize() {
            std::cout << "Initializing Version 1" << std::endl;
        }
    }

    inline namespace Version2 {
        void initialize() {
            std::cout << "Initializing Version 2" << std::endl;
        }
    }
}

int main() {
    Framework::initialize();  // Calls Version2 by default (latest inline)

    {
        using Framework::Version1::initialize;
        initialize();  // Forces usage of Version1
    }
    return 0;
}
