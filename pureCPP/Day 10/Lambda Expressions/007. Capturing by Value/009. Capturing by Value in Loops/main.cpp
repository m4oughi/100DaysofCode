#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    std::vector<std::function<void()>> lambdas;

    for (int num : numbers) {
        lambdas.push_back([num]() { // Capture each value of num
            std::cout << "Captured num: " << num << std::endl;
        });
    }

    for (auto& lambda : lambdas) {
        lambda(); // Outputs: Captured num: 1, Captured num: 2, Captured num: 3
    }
    return 0;
}
