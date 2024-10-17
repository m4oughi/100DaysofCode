#include <iostream>
#include <memory>

class MoveOnly {
    std::unique_ptr<int> data;  // Unique ownership of resource
public:
    MoveOnly() : data(std::make_unique<int>(42)) {
        std::cout << "Constructor: Allocating resource with unique_ptr.\n";
    }

    ~MoveOnly() {
        std::cout << "Destructor: Resource automatically released by unique_ptr.\n";
    }

    // Delete copy constructor and assignment
    MoveOnly(const MoveOnly&) = delete;
    MoveOnly& operator=(const MoveOnly&) = delete;

    // Default move constructor and move assignment operator
    MoveOnly(MoveOnly&&) noexcept = default;
    MoveOnly& operator=(MoveOnly&&) noexcept = default;
};

int main() {
    MoveOnly obj1;
    MoveOnly obj2 = std::move(obj1);  // Uses default move constructor
}
