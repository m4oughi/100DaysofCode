#include <iostream>

int main() {
    // Dynamically allocate memory for an integer
    int* ptr = new int;

    // Assign a value to the dynamically allocated memory
    *ptr = 42;

    std::cout << "Value: " << *ptr << std::endl;  // Output: Value: 42

    // Deallocate the memory
    delete ptr;

    return 0;
}
