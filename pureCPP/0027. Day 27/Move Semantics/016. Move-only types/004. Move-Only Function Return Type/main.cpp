#include <iostream>
#include <memory>

class MoveOnly {
    std::unique_ptr<int> data;
public:
    MoveOnly(int value) : data(std::make_unique<int>(value)) {
        std::cout << "Constructor: Allocating resource with unique_ptr.\n";
    }

    ~MoveOnly() {
        std::cout << "Destructor: Resource automatically released by unique_ptr.\n";
    }

    MoveOnly(const MoveOnly&) = delete;
    MoveOnly& operator=(const MoveOnly&) = delete;

    MoveOnly(MoveOnly&&) noexcept = default;
    MoveOnly& operator=(MoveOnly&&) noexcept = default;
};

// Function that returns a move-only type
MoveOnly createMoveOnly(int value) {
    return MoveOnly(value);  // Return temporary move-only object
}

int main() {
    MoveOnly obj = createMoveOnly(100);  // Move constructor is called
}
