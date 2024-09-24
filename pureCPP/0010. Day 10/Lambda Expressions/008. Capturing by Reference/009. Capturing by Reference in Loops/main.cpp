#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    std::vector<std::function<void()>> lambdas;

    for (int& num : numbers) {
        lambdas.push_back([&num]() {
            num *= 2; // Modify each number by reference
        });
    }

    for (auto& lambda : lambdas) {
        lambda(); // Doubles each number in the vector
    }

    for (int n : numbers) {
        std::cout << n << " "; // Outputs: 2 4 6
    }
    return 0;
}
