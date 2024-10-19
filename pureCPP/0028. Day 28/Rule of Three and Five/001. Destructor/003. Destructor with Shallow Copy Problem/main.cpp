#include <iostream>

class ShallowCopy {
    int* data;
public:
    ShallowCopy(int value) {
        data = new int(value);  // Allocate memory for data
        std::cout << "Constructor called!" << std::endl;
    }
    ~ShallowCopy() {
        delete data;  // Destructor will clean up the memory
        std::cout << "Destructor called!" << std::endl;
    }
};

void createObject() {
    ShallowCopy obj1(5);
    ShallowCopy obj2 = obj1;  // Shallow copy, both point to the same data
    // Destructor will be called twice on the same memory, causing a crash!
}

int main() {
    createObject();
    return 0;
}
