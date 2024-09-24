#include <iostream>
#include <vector>
#include <algorithm>

void applyToEach(const std::vector<int>& vec, const std::function<void(int)>& action) {
    std::for_each(vec.begin(), vec.end(), action);
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    applyToEach(numbers, [](int x) {
        std::cout << x * 2 << " ";
    }); // Outputs: 2 4 6 8 10

    return 0;
}
