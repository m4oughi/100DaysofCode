#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> evens(data.size());

    auto end_it = std::copy_if(std::execution::par, data.begin(), data.end(),
                               evens.begin(), [](int n) { return n % 2 == 0; });

    evens.resize(std::distance(evens.begin(), end_it));

    std::cout << "Even numbers: ";
    for (int num : evens) {
        std::cout << num << " ";
    }

    return 0;
}
