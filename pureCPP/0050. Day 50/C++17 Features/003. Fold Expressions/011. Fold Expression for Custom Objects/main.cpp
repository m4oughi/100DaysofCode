#include <iostream>

struct Box {
    int value;
    Box(int v) : value(v) {}
    Box operator+(const Box& other) const {
        return Box(value + other.value);
    }
};

template <typename... Args>
Box sumBoxes(Args... args) {
    return (args + ...);
}

int main() {
    Box b1(10), b2(20), b3(30);
    Box result = sumBoxes(b1, b2, b3);
    std::cout << "Box sum: " << result.value << '\n';
    return 0;
}
