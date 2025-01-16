#include <iostream>
#include <vector>
#include <algorithm>

class IsOdd {
public:
    bool operator()(int num) const {
        return num % 2 != 0;
    }
};

int main() {
    std::vector<int> numbers = {2, 4, 6, 8, 9, 10};
    auto it = std::find_if(numbers.begin(), numbers.end(), IsOdd());

    if (it != numbers.end()) {
        std::cout << "First odd number: " << *it << std::endl;
    } else {
        std::cout << "No odd numbers found." << std::endl;
    }
    return 0;
}
