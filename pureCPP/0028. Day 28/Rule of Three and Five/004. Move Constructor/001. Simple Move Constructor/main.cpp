#include <iostream>

class SimpleMove {
    int* data;
public:
    SimpleMove(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Move Constructor
    SimpleMove(SimpleMove&& other) noexcept {
        data = other.data;  // Transfer ownership of the resource
        other.data = nullptr;  // Set the other object's pointer to null
        std::cout << "Move Constructor called!" << std::endl;
    }

    ~SimpleMove() {
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
    SimpleMove obj1(10);
    SimpleMove obj2 = std::move(obj1);  // Move constructor is called
    obj2.display();  // obj2 takes ownership of obj1's resource
    obj1.display();  // obj1 is left in a valid but empty state
    return 0;
}
