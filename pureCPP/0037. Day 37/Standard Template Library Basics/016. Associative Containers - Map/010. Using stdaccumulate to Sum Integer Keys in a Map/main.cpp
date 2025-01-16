#include <iostream>
#include <map>
#include <numeric>

int main() {
    std::map<int, std::string> numbers = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0,
                              [](int acc, const std::pair<int, std::string> &p) { return acc + p.first; });

    std::cout << "Sum of keys: " << sum << "\n";
    return 0;
}
