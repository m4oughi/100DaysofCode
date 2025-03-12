#include <iostream>

int main() {
    int a = 5;
    decltype(a) b = 10; // `b` is inferred as int

    std::cout << "b: " << b << "\n";
    return 0;
}
