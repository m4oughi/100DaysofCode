#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{10, 20, 30};

    size_t min_size = std::min(vec1.size(), vec2.size());
    int result = std::transform_reduce(vec1.begin(), vec1.begin() + min_size, vec2.begin(), 0, std::plus<>(),
                                       std::multiplies<>());

    std::cout << "Result: " << result << '\n'; // Output: 140
}
