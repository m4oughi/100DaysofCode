#include <iostream>

int main() {
    const char* strings[3] = {"Hello", "World", "C++"};  // Array of pointers to strings

    // Print strings using the array of pointers
    for (int i = 0; i < 3; ++i) {
        std::cout << strings[i] << " ";  // Outputs: Hello World C++
    }
    std::cout << std::endl;
}
