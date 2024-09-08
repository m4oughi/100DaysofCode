#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {2, 4, 6, 8, 10};

    std::cout << "Doubling elements:" << std::endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it *= 2;
        std::cout << *it << " ";
    }

    return 0;
}
