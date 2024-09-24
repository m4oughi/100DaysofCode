#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Halving elements in reverse order:" << std::endl;
    for (auto rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
        *rit /= 2;
        std::cout << *rit << " ";
    }

    return 0;
}
