#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (int num : numbers) { // Range-based loop
        std::cout << num << " ";
    }

    return 0;
}
