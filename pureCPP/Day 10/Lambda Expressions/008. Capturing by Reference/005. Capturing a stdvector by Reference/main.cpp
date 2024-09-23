#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    auto addElement = [&numbers]() {
        numbers.push_back(4);
    };

    addElement();
    for (int n : numbers) {
        std::cout << n << " "; // Outputs: 1 2 3 4
    }
    return 0;
}
