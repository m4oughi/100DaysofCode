#include <iostream>

namespace OldVersion {
    struct Data {
        int value;
        void show() const {
            std::cout << "Old version: " << value << std::endl;
        }
    };
}

inline namespace NewVersion {  // Inline namespace
    struct Data {
        int value;
        void show() const {
            std::cout << "New version: " << value << std::endl;
        }
    };
}

int main() {
    Data obj;  // Will use the struct from NewVersion by default
    obj.value = 50;
    obj.show();
}
