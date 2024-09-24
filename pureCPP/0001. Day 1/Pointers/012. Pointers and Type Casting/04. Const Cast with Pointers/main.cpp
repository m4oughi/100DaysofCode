#include <iostream>

void print(const int* ptr) {
    // Remove constness and modify the value
    int* modifiablePtr = const_cast<int*>(ptr);
    *modifiablePtr = 20;
    std::cout << "Modified value: " << *ptr << std::endl;
}

int main() {
    int x = 10;
    const int* ptr = &x;
    print(ptr);  // Output: Modified value: 20

    return 0;
}
