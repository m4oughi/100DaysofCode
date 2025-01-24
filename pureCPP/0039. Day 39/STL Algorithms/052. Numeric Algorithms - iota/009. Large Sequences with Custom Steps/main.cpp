#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n = 10;
    std::vector<int> numbers(n);
    std::iota(numbers.begin(), numbers.end(), 1);

    int step = 5;
    std::cout << "Sequence with step size: ";
    for (int& num : numbers) {
        num *= step;
        std::cout << num << " ";
    }
    std::cout << "\n"; // Output: 5 10 15 20 25 30 35 40 45 50

    return 0;
}
