#include <iostream>
#include <vector>
#include <algorithm>

class AddValue {
    int valueToAdd;

public:
    AddValue(int val) : valueToAdd(val) {}
    int operator()(int num) const {
        return num + valueToAdd;
    }
};

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    std::vector<int> results;

    std::transform(numbers.begin(), numbers.end(), std::back_inserter(results), AddValue(10));

    for (int num : results) {
        std::cout << num << " ";
    }
    return 0;
}
