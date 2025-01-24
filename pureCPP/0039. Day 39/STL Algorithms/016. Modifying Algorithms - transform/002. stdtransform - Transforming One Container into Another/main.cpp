#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

int main() {
    std::list<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination(source.size());

    std::transform(source.begin(), source.end(), destination.begin(), [](int x) { return x + 10; });

    std::cout << "Transformed list to vector: ";
    for (int num : destination) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
