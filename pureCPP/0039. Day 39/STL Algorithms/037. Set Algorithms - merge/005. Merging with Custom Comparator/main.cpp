#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {50, 40, 30};
    std::vector<int> vec2 = {45, 35, 25};
    std::vector<int> result(vec1.size() + vec2.size());

    std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), result.begin(), std::greater<int>());

    std::cout << "Merged vector (descending order): ";
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
