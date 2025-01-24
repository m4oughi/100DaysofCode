#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> values = {1, 2, 3, 4};

    bool noneZero = std::none_of(values.begin(), values.end(), [](int x) {
        return x == 0;
    });

    std::cout << (noneZero ? "No zeros in the list." : "There are zeros in the list.") << std::endl;

    return 0;
}
