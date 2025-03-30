#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    for (auto num : numbers) { // C++11 auto keyword
        std::cout << num << " ";
    }

    return 0;
}
