#include <iostream>

class NoMove {
public:
    NoMove() = default;
    NoMove(NoMove&&) = delete; // Prevent move construction
    NoMove& operator=(NoMove&&) = delete; // Prevent move assignment
};

int main() {
    NoMove obj1;
    // NoMove obj2 = std::move(obj1); // Error: Move constructor is deleted
    return 0;
}
