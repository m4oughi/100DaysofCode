#include <iostream>

namespace StaticNamespace {
    struct StaticStruct {
        static void showMessage() {
            std::cout << "Static function inside namespace." << std::endl;
        }
    };
}

int main() {
    StaticNamespace::StaticStruct::showMessage();  // Calling static function
}
