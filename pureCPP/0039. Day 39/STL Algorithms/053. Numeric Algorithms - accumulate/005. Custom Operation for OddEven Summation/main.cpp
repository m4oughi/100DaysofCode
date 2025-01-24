#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum_of_odds = std::accumulate(numbers.begin(), numbers.end(), 0, 
        [](int acc, int val) {
            return (val % 2 != 0) ? acc + val : acc;
        });

    std::cout << "Sum of odd numbers: " << sum_of_odds << "\n"; // Output: 9
    return 0;
}
