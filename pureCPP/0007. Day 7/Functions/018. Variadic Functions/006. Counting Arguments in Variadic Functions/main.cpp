#include <iostream>

template<typename... Args>
int countArgs(Args... args) {
    return sizeof...(args);  // Return the number of arguments
}

int main() {
    std::cout << "Number of arguments: " << countArgs(1, 2.5, "Hello", 'A') << std::endl;
    std::cout << "Number of arguments: " << countArgs(10, 20, 30) << std::endl;

    return 0;
}
