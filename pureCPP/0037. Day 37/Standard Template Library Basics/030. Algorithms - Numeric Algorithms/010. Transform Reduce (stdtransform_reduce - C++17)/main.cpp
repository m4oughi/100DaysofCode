#include <iostream>
#include <vector>
#include <numeric>
#include <execution>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    int result = std::transform_reduce(vec1.begin(), vec1.end(), vec2.begin(), 0);

    std::cout << "Transform reduce: " << result << "\n";

    return 0;
}
