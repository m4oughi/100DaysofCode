#include <iostream>
#include <functional>

int main() {
    std::minus<int> subtract; // Predefined functor for subtraction

    int result = subtract(50, 15);
    std::cout << "50 - 15 = " << result << "\n";

    return 0;
}
