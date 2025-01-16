#include <iostream>
#include <vector>
#include <algorithm>

template <typename RandomAccessIterator>
void customSort(RandomAccessIterator begin, RandomAccessIterator end) {
    std::sort(begin, end, [](int a, int b) { return a > b; }); // Sort in descending order
}

int main() {
    std::vector<int> vec = {3, 1, 4, 1, 5};

    customSort(vec.begin(), vec.end());

    std::cout << "Sorted vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
