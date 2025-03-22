#include <iostream>

struct Counter {
    static inline int count = 0;

    Counter() { ++count; }
};

int main() {
    Counter c1, c2, c3;
    std::cout << "Number of instances: " << Counter::count << '\n';
    return 0;
}
