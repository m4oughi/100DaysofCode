#include <iostream>
#include <set>
#include <numeric>

int main() {
    std::multiset<int> numbers = {1, 2, 2, 3, 3};

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    std::cout << "Sum of elements: " << sum << "\n";
    return 0;
}
