#include <iostream>
#include <memory>

class SmartPointerMove {
    std::unique_ptr<int> data;
public:
    SmartPointerMove(int value) : data(std::make_unique<int>(value)) {
        std::cout << "Constructor called!" << std::endl;
    }

    // Move Constructor
    SmartPointerMove(SmartPointerMove&& other) noexcept : data(std::move(other.data)) {
        std::cout << "Move Constructor called!" << std::endl;
    }

    void display() const {
        if (data)
            std::cout << "Data: " << *data << std::endl;
        else
            std::cout << "Data is null" << std::endl;
    }
};

int main() {
    SmartPointerMove obj1(60);
    SmartPointerMove obj2 = std::move(obj1);  // Move constructor
    obj2.display();
    obj1.display();  // Moved-from object is in null state
    return 0;
}
