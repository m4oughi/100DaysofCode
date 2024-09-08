#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    int* ptr = arr.data();  // Get pointer to the underlying array
    std::cout << "First element using data(): " << *ptr << std::endl;  // Output: First element using data(): 10


    return 0;
}