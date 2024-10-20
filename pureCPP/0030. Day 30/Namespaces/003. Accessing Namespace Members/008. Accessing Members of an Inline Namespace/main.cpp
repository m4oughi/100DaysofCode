#include <iostream>

namespace App {
    inline namespace Version1 {
        void info() {
            std::cout << "App Version 1" << std::endl;
        }
    }

    namespace Version2 {
        void info() {
            std::cout << "App Version 2" << std::endl;
        }
    }
}

int main() {
    App::info();  // Calls Version1::info() as it is inline
    App::Version2::info();  // Explicitly calls Version2::info()
    return 0;
}
