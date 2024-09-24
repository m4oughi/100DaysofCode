#include <iostream>

inline int countCalls() {
    static int counter = 0;
    return ++counter;
}

int main() {
    std::cout << "First call: " << countCalls() << std::endl;
    std::cout << "Second call: " << countCalls() << std::endl;
    std::cout << "Third call: " << countCalls() << std::endl;
    return 0;
}
