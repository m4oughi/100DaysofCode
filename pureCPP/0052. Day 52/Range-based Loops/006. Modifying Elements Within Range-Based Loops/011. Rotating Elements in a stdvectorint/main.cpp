#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    int first = numbers.front();
    for (int& num : numbers) {
        num = (num == numbers.back()) ? first : num + 1;
    }

    for (const int& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
