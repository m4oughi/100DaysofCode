#include <iostream>
#include <numeric>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> words{"hello", "world", "stl", "transform_reduce"};

    size_t total_length = std::transform_reduce(words.begin(), words.end(), 0u, std::plus<>(), [](const std::string& s) {
        return s.length();
    });

    std::cout << "Total length of strings: " << total_length << '\n'; // Output: 32
}
