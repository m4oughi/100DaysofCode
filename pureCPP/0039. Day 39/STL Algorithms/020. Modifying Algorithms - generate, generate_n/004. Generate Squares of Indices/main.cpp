#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec(10);

    int index = 0;
    std::generate(vec.begin(), vec.end(), [&index]() { return index * index++; });

    std::cout << "Generated squares: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
