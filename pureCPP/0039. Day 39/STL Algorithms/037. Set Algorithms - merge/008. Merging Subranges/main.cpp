#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 3, 5, 7};
    std::vector<int> vec2 = {2, 4, 6, 8};
    std::vector<int> result(4);

    std::merge(vec1.begin(), vec1.begin() + 2, vec2.begin(), vec2.begin() + 2, result.begin());

    std::cout << "Merged subranges: ";
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
