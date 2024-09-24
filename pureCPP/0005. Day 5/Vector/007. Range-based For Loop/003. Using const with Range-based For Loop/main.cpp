#include <iostream>
#include <vector>

int main() {
    const std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Elements in the const vector:" << std::endl;
    for (const int& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
