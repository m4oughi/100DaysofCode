#include <iostream>
#include <tuple>
#include <vector>

int main() {
    std::tuple<std::vector<int>, std::vector<int>> data = {
        {1, 2, 3}, {4, 5, 6}
    };

    for (const auto& container : {std::get<0>(data), std::get<1>(data)}) {
        for (const auto& num : container) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
