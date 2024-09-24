#include <iostream>

int main() {
    int a = 10, b = 20, c = 30;
    int* arr[3] = {&a, &b, &c};  // Array of pointers

    for (int i = 0; i < 3; ++i) {
        std::cout << "Value at pointer " << i << ": " << *arr[i] << std::endl;
    }

    return 0;
}
