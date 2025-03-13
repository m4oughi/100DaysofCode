#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> values = {1, 2, 3, 4, 5};

    std::for_each(values.begin(), values.end(), [](auto value) {
        std::cout << "Value: " << value << std::endl;
    });

    return 0;
}
