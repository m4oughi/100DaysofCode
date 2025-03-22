#include <iostream>

struct Operations {
    static inline void (*operation)(int) = nullptr;
};

void printSquare(int x) {
    std::cout << "Square: " << x * x << '\n';
}

int main() {
    Operations::operation = printSquare;
    Operations::operation(5);
    return 0;
}
