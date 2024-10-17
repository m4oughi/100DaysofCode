#include <iostream>
#include <memory>
#include <functional>

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

    void showData() const {
        std::cout << "Data: " << *data << "\n";
    }
};

int main() {
    MoveOnly obj(500);

    // Lambda capturing move-only type by move
    auto func = [obj = std::move(obj)]() {
        obj.showData();
    };

    func();  // Calls lambda, accessing move-only object
}
