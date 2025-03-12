#include <iostream>

struct DefaultAlign {
    int a;
    double b;
};

int main() {
    std::cout << "Alignment of int: " << alignof(int) << '\n';
    std::cout << "Alignment of double: " << alignof(double) << '\n';
    std::cout << "Alignment of DefaultAlign struct: " << alignof(DefaultAlign) << '\n';
    return 0;
}
