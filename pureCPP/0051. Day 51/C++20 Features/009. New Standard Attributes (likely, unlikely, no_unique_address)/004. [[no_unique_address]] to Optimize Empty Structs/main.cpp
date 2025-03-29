#include <iostream>

struct Empty {};

struct Optimized {
    int id;
    [[no_unique_address]] Empty e;
};

int main() {
    std::cout << "Size of Optimized struct: " << sizeof(Optimized) << "\n";
}
