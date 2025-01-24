#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {2, 3, 4};
    std::vector<int> result(vec1.size() + vec2.size());

    std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), result.begin());

    std::cout << "Merged vector with duplicates: ";
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
