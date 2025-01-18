#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> source = {4, 5, 6};
    std::vector<int> target = {1, 2, 3};

    auto it = std::back_insert_iterator<std::vector<int>>(target);

    std::copy(source.begin(), source.end(), it);

    std::cout << "Target after back insertion: ";
    for (int num : target) {
        std::cout << num << " ";
    }

    return 0;
}
