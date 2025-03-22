#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};

    std::for_each(std::execution::par, data.begin(), data.end(),
                  [](int &n) { n *= 2; });

    std::cout << "Doubled data: ";
    for (int num : data) {
        std::cout << num << " ";
    }

    return 0;
}
