#include <iostream>

class Counter {
public:
    int count;
    Counter(int c) : count(c) {}
};

int main() {
    Counter cnt(5);
    auto lambda = [cnt]() {
        std::cout << "Captured count: " << cnt.count << std::endl;
    };

    cnt.count = 10;
    lambda(); // Outputs: Captured count: 5
    return 0;
}
