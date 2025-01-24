#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 11, 20, 21, 30, 31};

    auto new_end = std::unique(vec.begin(), vec.end(), [](int a, int b) {
        return (a / 10) == (b / 10); // Treat numbers in the same tens group as equal
    });

    std::cout << "Vector after std::unique: ";
    for (auto it = vec.begin(); it != new_end; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
