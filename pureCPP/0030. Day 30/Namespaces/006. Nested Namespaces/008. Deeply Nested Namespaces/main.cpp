#include <iostream>

namespace World {
    namespace Continent {
        namespace Country {
            void info() {
                std::cout << "Country information" << std::endl;
            }
        }
    }
}

int main() {
    World::Continent::Country::info();  // Accessing deeply nested function
    return 0;
}
