#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> source = {100, 200, 300};
    std::vector<int> target = {1, 2, 3, 4, 5};

    auto it = std::insert_iterator<std::vector<int>>(target, target.begin() + 2);

    std::copy(source.begin(), source.end(), it);

    std::cout << "Target after custom insertion: ";
    for (int num : target) {
        std::cout << num << " ";
    }

    return 0;
}
