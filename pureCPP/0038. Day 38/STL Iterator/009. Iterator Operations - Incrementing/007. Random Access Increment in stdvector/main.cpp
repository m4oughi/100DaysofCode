#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Random access iterator jump: ";
    for (auto it = numbers.begin(); it < numbers.end(); it += 2) {
        std::cout << *it << " ";
    }

    return 0;
}
