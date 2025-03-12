#include <iostream>

void func(int) {
    std::cout << "Called func(int)" << std::endl;
}

void func(int*) {
    std::cout << "Called func(int*)" << std::endl;
}

int main() {
    func(nullptr); // Calls func(int*)
    return 0;
}
