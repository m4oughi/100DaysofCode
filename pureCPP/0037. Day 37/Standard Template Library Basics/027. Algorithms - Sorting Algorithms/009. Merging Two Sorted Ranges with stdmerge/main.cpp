#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 3, 5};
    std::vector<int> vec2 = {2, 4, 6};
    std::vector<int> result(vec1.size() + vec2.size());

    std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), result.begin());

    std::cout << "Merged sorted ranges: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
