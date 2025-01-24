#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec;

    int pattern[] = {1, 2, 3};
    int index = 0;

    std::generate_n(std::back_inserter(vec), 9, [&]() {
        return pattern[index++ % 3];
    });

    std::cout << "Generated pattern: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
