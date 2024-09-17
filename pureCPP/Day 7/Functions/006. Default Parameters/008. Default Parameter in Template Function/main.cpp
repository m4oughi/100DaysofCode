#include <iostream>

// Template function declaration with default parameter
template <typename T>
void printValue(T value = T());

int main() {
    printValue(5);                   // Integer argument provided
    printValue();                    // Uses default int() -> 0
    printValue(3.14);                // Double argument
    printValue<std::string>();       // Default string() -> ""
    return 0;
}

// Template function definition with default parameter
template <typename T>
void printValue(T value) {
    std::cout << "Value: " << value << std::endl;
}
