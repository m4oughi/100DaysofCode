#include <iostream>

class MyClass {
    int* ptr;
public:
    MyClass() : ptr(nullptr) {} // Initialize pointer to null

    bool isNull() const {
        return ptr == nullptr;
    }
};

int main() {
    MyClass obj;
    std::cout << "Is pointer null? " << std::boolalpha << obj.isNull() << std::endl;
    return 0;
}
