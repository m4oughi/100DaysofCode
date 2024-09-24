#include <iostream>

struct Data {
    int x;
    float y;
};

int main() {
    Data data = {42, 3.14f};
    int* intPtr = reinterpret_cast<int*>(&data);  // Reinterpret the address as int pointer

    std::cout << "Interpreted int value: " << *intPtr << std::endl;  // Output: 42

    intPtr++;
    float* floatPtr = reinterpret_cast<float*>(intPtr);  // Reinterpret the address as float pointer
    std::cout << "Interpreted float value: " << *floatPtr << std::endl;  // Output: 3.14

    return 0;
}
