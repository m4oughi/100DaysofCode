#include <iostream>
#include <vector>
#include <algorithm>

void applyOperation(std::vector<int>& vec, const std::function<void(int&)>& operation) {
    for (auto& element : vec) {
        operation(element); // Apply operation to each element
    }
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    applyOperation(numbers, [](int& n) {
        n *= n;
        std::cout << "Squared: " << n << std::endl;
    });

    return 0;
}
