#include <iostream>
#include <vector>
#include <algorithm>

class Descending {
public:
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9};
    std::sort(numbers.begin(), numbers.end(), Descending());

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
