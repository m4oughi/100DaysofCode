#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};
    int factor = 3;

    std::for_each(numbers.begin(), numbers.end(), [factor](int &num) {
        num *= factor;
    });

    for (int n : numbers) {
        std::cout << n << " ";
    } // Output: 30 60 90 120

    return 0;
}
