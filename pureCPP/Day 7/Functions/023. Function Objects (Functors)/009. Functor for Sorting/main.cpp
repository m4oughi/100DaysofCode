#include <iostream>
#include <vector>
#include <algorithm>

class CompareDescending {
public:
    bool operator()(int a, int b) const {
        return a > b;  // For descending order
    }
};

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};
    
    std::sort(numbers.begin(), numbers.end(), CompareDescending());

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;  // Output: 9 6 5 5 2 1

    return 0;
}
