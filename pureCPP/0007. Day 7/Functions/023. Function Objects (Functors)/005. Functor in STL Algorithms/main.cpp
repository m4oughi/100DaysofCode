#include <iostream>
#include <vector>
#include <algorithm>

class LessThan {
private:
    int threshold;

public:
    LessThan(int t) : threshold(t) {}

    bool operator()(int value) const {
        return value < threshold;
    }
};

int main() {
    std::vector<int> numbers = {1, 5, 8, 12, 15};
    LessThan lessThan10(10);
    
    auto it = std::find_if(numbers.begin(), numbers.end(), lessThan10);
    if (it != numbers.end()) {
        std::cout << "First number less than 10: " << *it << std::endl;  // Output: First number less than 10: 1
    }

    return 0;
}
