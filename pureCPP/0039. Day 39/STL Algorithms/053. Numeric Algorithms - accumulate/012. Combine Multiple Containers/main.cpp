#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    int total_sum = std::accumulate(vec1.begin(), vec1.end(), 0) + 
                    std::accumulate(vec2.begin(), vec2.end(), 0);

    std::cout << "Combined sum: " << total_sum << "\n"; // Output: 21
    return 0;
}
