#include <iostream>
#include <vector>
#include <numeric>

void accumulateValues(const std::vector<int>& vec, const std::function<int(int, int)>& operation) {
    int result = std::accumulate(vec.begin(), vec.end(), 0, operation);
    std::cout << "Accumulated Result: " << result << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    accumulateValues(numbers, [](int total, int n) {
        return total + n; // Sum all elements
    }); // Outputs: Accumulated Result: 15

    return 0;
}
