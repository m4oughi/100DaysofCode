#include <iostream>
#include <vector>
#include <algorithm>

class DoubleValue {
public:
    void operator()(int &n) const {
        n *= 2;
    }
};

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::for_each(numbers.begin(), numbers.end(), DoubleValue());

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
