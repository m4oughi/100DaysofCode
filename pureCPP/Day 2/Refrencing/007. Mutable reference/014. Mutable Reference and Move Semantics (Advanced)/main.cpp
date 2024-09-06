#include <iostream>

class Resource {
private:
    int *data;

public:
    Resource(int val) : data(new int(val)) {}

    // Move constructor using a mutable reference
    Resource(Resource &other) noexcept {
        data = other.data;
        other.data = nullptr;  // Transfer ownership
    }

    ~Resource() {
        delete data;
    }

    int getValue() const {
        return data ? *data : 0;
    }
};

int main() {
    Resource r1(100);
    Resource r2(r1);  // r2 takes ownership of r1's data
    std::cout << r1.getValue() << std::endl;  // Output: 0 (r1 is now empty)
    std::cout << r2.getValue() << std::endl;  // Output: 100

    return 0;
}