#include <iostream>
#include <vector>
#include <algorithm>

void findNumber(const std::vector<int>& vec, const std::function<bool(int)>& predicate) {
    auto it = std::find_if(vec.begin(), vec.end(), predicate);
    if (it != vec.end()) {
        std::cout << "Found: " << *it << std::endl;
    } else {
        std::cout << "Not Found" << std::endl;
    }
}

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    
    findNumber(numbers, [](int x) {
        return x > 25;
    }); // Outputs: Found: 30

    findNumber(numbers, [](int x) {
        return x < 15;
    }); // Outputs: Found: 10

    return 0;
}
