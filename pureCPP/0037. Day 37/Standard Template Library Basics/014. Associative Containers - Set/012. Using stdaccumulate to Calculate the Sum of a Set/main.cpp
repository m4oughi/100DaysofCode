#include <iostream>
#include <set>
#include <numeric>

int main() {
    std::set<int> numbers = {1, 2, 3, 4, 5};

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    std::cout << "Sum: " << sum << "\n";
    return 0;
}
