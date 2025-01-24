#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {5, 6, 7, 8, 9};

    auto it = std::find_first_of(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());

    if (it != vec1.end()) {
        std::cout << "First common element: " << *it << std::endl;
    } else {
        std::cout << "No common elements found." << std::endl;
    }

    return 0;
}
