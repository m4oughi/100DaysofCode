#include <iostream>
#include <vector>
#include <algorithm>

class IsWithinRange {
private:
    int min, max;

public:
    IsWithinRange(int minVal, int maxVal) : min(minVal), max(maxVal) {}

    bool operator()(int value) const {
        return value >= min && value <= max;
    }
};

int main() {
    std::vector<int> numbers = {1, 4, 6, 8, 10, 15};
    IsWithinRange rangeCheck(5, 10);
    
    auto it = std::count_if(numbers.begin(), numbers.end(), rangeCheck);
    std::cout << "Count of numbers within range [5, 10]: " << it << std::endl;  // Output: Count of numbers within range [5, 10]: 4

    return 0;
}
