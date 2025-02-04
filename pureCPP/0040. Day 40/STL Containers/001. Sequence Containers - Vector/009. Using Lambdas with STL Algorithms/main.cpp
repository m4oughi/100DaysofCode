#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Multiply each element by 2 using for_each
    std::for_each(vec.begin(), vec.end(), [](int& x) { x *= 2; });

    for (int i : vec) std::cout << i << " ";

    return 0;
}
