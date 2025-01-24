#include <iostream>
#include <vector>
#include <numeric>

struct Stats {
    double sum = 0;
    double square_sum = 0;
};

int main() {
    std::vector<int> data = {1, 2, 3, 4};

    Stats result = std::reduce(data.begin(), data.end(), Stats(),
                               [](Stats s, int x) {
                                   s.sum += x;
                                   s.square_sum += x * x;
                                   return s;
                               });

    std::cout << "Sum: " << result.sum << ", Sum of squares: " << result.square_sum << std::endl;
    // Output: Sum: 10, Sum of squares: 30
    return 0;
}
