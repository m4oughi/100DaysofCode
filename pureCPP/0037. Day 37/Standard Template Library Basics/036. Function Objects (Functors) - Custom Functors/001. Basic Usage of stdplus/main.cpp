#include <iostream>
#include <functional>

int main() {
    std::plus<int> add; // Predefined functor for addition

    int result = add(10, 20);
    std::cout << "10 + 20 = " << result << "\n";

    return 0;
}
