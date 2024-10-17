#include <iostream>

class MoveOnly {
    int* data;
public:
    MoveOnly() : data(new int(42)) {
        std::cout << "Constructor: Allocating resource.\n";
    }

    ~MoveOnly() {
        delete data;
        std::cout << "Destructor: Releasing resource.\n";
    }

    // Delete copy constructor and copy assignment operator
    MoveOnly(const MoveOnly&) = delete;
    MoveOnly& operator=(const MoveOnly&) = delete;

    // Move constructor
    MoveOnly(MoveOnly&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move constructor: Resource moved.\n";
    }

    // Move assignment operator
    MoveOnly& operator=(MoveOnly&& other) noexcept {
        if (this != &other) {
            delete data;   // Release current resource
            data = other.data;  // Take ownership of other's resource
            other.data = nullptr;
            std::cout << "Move assignment operator: Resource moved.\n";
        }
        return *this;
    }
};

int main() {
    MoveOnly obj1;
    MoveOnly obj2 = std::move(obj1);  // Calls move constructor
}
