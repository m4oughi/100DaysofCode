#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec(10);
    int value = 1;

    std::generate(vec.begin(), vec.end(), [&value]() { return value++; });

    std::cout << "After generate: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
