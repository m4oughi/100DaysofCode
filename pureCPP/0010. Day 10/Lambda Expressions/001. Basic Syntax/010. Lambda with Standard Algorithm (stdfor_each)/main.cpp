#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    // Lambda used with std::for_each to print each element
    std::for_each(vec.begin(), vec.end(), [](int n) {
        std::cout << "Element: " << n << std::endl;
    });
    return 0;
}
