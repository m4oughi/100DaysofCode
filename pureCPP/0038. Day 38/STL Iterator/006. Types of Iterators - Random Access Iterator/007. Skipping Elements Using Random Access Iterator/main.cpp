#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8};

    std::cout << "Elements at even indices: ";
    for (auto it = numbers.begin(); it < numbers.end(); it += 2) {
        std::cout << *it << " ";
    }

    return 0;
}
