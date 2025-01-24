#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    int dot_product = std::reduce(vec1.begin(), vec1.end(), 0,
                                  [&vec2, idx = 0](int sum, int val) mutable {
                                      return sum + val * vec2[idx++];
                                  });

    std::cout << "Dot product: " << dot_product << std::endl;
    // Output: Dot product: 32
    return 0;
}
