#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers(10);
    int value = 1;

    std::generate(numbers.begin(), numbers.end(), [&value]() {
        return value++;
    });

    for (int n : numbers) {
        std::cout << n << " ";
    }
    // Outputs: 1 2 3 4 5 6 7 8 9 10

    return 0;
}
