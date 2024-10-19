#include <iostream>

class DynamicMove {
    int* data;
public:
    DynamicMove(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Move Constructor
    DynamicMove(DynamicMove&& other) noexcept {
        data = other.data;  // Transfer ownership
        other.data = nullptr;  // Nullify the source object
        std::cout << "Move Constructor called!" << std::endl;
    }

    ~DynamicMove() {
        delete data;
        std::cout << "Destructor called!" << std::endl;
    }

    void display() const {
        if (data)
            std::cout << "Data: " << *data << std::endl;
        else
            std::cout << "Data is null" << std::endl;
    }
};

int main() {
    DynamicMove obj1(20);
    DynamicMove obj2 = std::move(obj1);  // Move constructor avoids deep copy
    obj2.display();  // obj2 takes ownership
    obj1.display();  // obj1 is left in a null state
    return 0;
}
