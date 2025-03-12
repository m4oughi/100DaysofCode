#include <iostream>

int add(int a, int b) { return a + b; }

int main() {
    decltype(add)* funcPtr = add; // Deduces int(*)(int, int)

    std::cout << "Sum: " << funcPtr(3, 4) << std::endl;
    return 0;
}
