#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    for (const int& num : numbers) { // Using const reference
        std::cout << num << " ";
    }

    return 0;
}
