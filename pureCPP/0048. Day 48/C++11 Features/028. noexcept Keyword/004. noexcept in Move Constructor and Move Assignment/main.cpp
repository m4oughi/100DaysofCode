#include <iostream>
#include <vector>

struct NoExceptMove {
    std::vector<int> data;

    NoExceptMove() = default;
    NoExceptMove(NoExceptMove&&) noexcept = default;
    NoExceptMove& operator=(NoExceptMove&&) noexcept = default;
};

int main() {
    NoExceptMove a, b;
    b = std::move(a); // Optimized move operation
    return 0;
}
