#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 10, 15, 20, 25, 30};

    std::partition(vec.begin(), vec.end(), [](int x) { return x > 15; });

    std::cout << "Partitioned vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
