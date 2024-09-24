#include <iostream>

struct Point {
    int x;
    int y;

    constexpr int sum() const {
        return x + y; // Access in a constexpr function
    }
};

int main() {
    constexpr Point p = {10, 20};
    constexpr int total = p.sum();
    std::cout << "Sum: " << total << std::endl;
}
