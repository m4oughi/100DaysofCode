#include <iostream>

class SmartPointer {
    int* ptr;
public:
    SmartPointer(int* p) : ptr(p) {}

    ~SmartPointer() { delete ptr; }

    explicit operator bool() const { // Explicit conversion to bool
        return ptr != nullptr;
    }
};

int main() {
    SmartPointer sp1(new int(10));
    SmartPointer sp2(nullptr);

    if (sp1) {  // static_cast<bool>(sp1) is required if explicit is removed
        std::cout << "sp1 is valid" << std::endl;
    }

    if (!static_cast<bool>(sp2)) {
        std::cout << "sp2 is null" << std::endl;
    }

    return 0;
}
