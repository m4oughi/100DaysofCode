#include <iostream>

template <typename T>
struct Counter {
    static inline int count = 0;
    
    Counter() { ++count; }
};

int main() {
    Counter<int> c1, c2;
    Counter<double> c3;

    std::cout << "Count for int: " << Counter<int>::count << '\n';
    std::cout << "Count for double: " << Counter<double>::count << '\n';
    return 0;
}
