#include <iostream>
#include <any>

int main() {
    std::any var = 42;  // Holds an int
    var = 3.14;         // Now holds a double

    try {
        std::cout << "Stored value: " << std::any_cast<double>(var) << "\n";
    } catch (const std::bad_any_cast&) {
        std::cout << "Type mismatch error\n";
    }

    return 0;
}
