#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    double sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    double average = sum / numbers.size();

    std::cout << "Average: " << average << "\n"; // Output: 30
    return 0;
}
