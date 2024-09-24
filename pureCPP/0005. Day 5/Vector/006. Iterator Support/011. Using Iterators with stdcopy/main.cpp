#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination(5);

    std::copy(source.begin(), source.end(), destination.begin());

    std::cout << "Elements in destination vector:" << std::endl;
    for (auto it = destination.begin(); it != destination.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
