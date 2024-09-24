#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;  // Memory is allocated as needed

    numbers.push_back(1);  // Memory is allocated for one element
    numbers.push_back(2);  // Memory is automatically expanded

    // The vector automatically deallocates memory when it goes out of scope

    return 0;  // No need for manual memory management
}
