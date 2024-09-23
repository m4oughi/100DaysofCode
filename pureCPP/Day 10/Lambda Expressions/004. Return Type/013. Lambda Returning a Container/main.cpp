#include <iostream>
#include <vector>

int main() {
    // Lambda returning a vector
    auto generateVector = [](int n) -> std::vector<int> {
        std::vector<int> result;
        for (int i = 0; i < n; ++i) {
            result.push_back(i * 2);
        }
        return result;
    };
    std::vector<int> vec = generateVector(5);
    std::cout << "Generated vector: ";
    for (int num : vec) {
        std::cout << num << " "; // Outputs: 0 2 4 6 8 
    }
    return 0;
}
