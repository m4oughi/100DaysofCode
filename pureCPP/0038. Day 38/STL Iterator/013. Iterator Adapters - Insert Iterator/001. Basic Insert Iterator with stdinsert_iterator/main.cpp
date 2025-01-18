#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> source = {1, 2, 3};
    std::vector<int> target = {10, 20, 30};

    auto it = std::insert_iterator<std::vector<int>>(target, target.begin() + 1);

    std::copy(source.begin(), source.end(), it);

    std::cout << "Target after insertion: ";
    for (int num : target) {
        std::cout << num << " ";
    }

    return 0;
}
