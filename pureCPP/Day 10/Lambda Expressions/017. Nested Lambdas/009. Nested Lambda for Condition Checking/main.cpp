#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto isDivisible = [](int divisor) {
        return [divisor](int number) {
            return number % divisor == 0;
        };
    };

    auto count = std::count_if(numbers.begin(), numbers.end(), isDivisible(3));
    std::cout << "Numbers divisible by 3: " << count << std::endl; // Outputs: Numbers divisible by 3: 3

    return 0;
}
