#include <iostream>
#include <vector>

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

    MoveOnly(const MoveOnly&) = delete;
    MoveOnly& operator=(const MoveOnly&) = delete;

    MoveOnly(MoveOnly&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move constructor: Resource moved.\n";
    }

    MoveOnly& operator=(MoveOnly&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
            std::cout << "Move assignment operator: Resource moved.\n";
        }
        return *this;
    }
};

int main() {
    std::vector<MoveOnly> vec;
    vec.push_back(MoveOnly());  // Move-only type can be pushed into vector
}
