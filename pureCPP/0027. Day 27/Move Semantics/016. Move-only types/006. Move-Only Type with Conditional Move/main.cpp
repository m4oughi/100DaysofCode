#include <iostream>
#include <memory>

class MoveOnly {
    std::unique_ptr<int> data;
public:
    MoveOnly(int value) : data(std::make_unique<int>(value)) {
        std::cout << "Constructor: Allocating resource.\n";
    }

    ~MoveOnly() {
        std::cout << "Destructor: Releasing resource.\n";
    }

    MoveOnly(const MoveOnly&) = delete;
    MoveOnly& operator=(const MoveOnly&) = delete;

    MoveOnly(MoveOnly&&) noexcept = default;
    MoveOnly& operator=(MoveOnly&&) noexcept = default;

    void showData() const {
        std::cout << "Data: " << *data << "\n";
    }
};

// Function to conditionally return move-only object
MoveOnly createMoveOnlyConditionally(bool moveObject) {
    MoveOnly temp(100);
    if (moveObject) {
        return temp;  // Move constructor invoked here
    }
    return MoveOnly(200);  // Move constructor invoked here
}

int main() {
    MoveOnly obj1 = createMoveOnlyConditionally(true);
    obj1.showData();

    MoveOnly obj2 = createMoveOnlyConditionally(false);
    obj2.showData();
}
