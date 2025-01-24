#include <iostream>
#include <numeric>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> words{"hello", "world", "transform", "scan"};
    std::vector<int> result(words.size());

    std::transform_exclusive_scan(words.begin(), words.end(), result.begin(), 0, std::plus<>(), [](const std::string& s) {
        return s.length();
    });

    std::cout << "Exclusive scan of string lengths: ";
    for (int n : result) std::cout << n << " ";
    // Output: 0 5 10 19
}
