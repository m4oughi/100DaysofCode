#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {10, 20, 30};
    std::vector<int> vec2 = {15, 25, 35};
    std::deque<int> result(vec1.size() + vec2.size());

    std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), result.begin());

    std::cout << "Merged deque: ";
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
