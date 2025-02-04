#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 2, 9, 1, 5, 6};

    // Ascending sort
    std::sort(vec.begin(), vec.end());
    for (int i : vec) std::cout << i << " ";
    std::cout << "\n";

    // Descending sort
    std::sort(vec.rbegin(), vec.rend());
    for (int i : vec) std::cout << i << " ";

    return 0;
}
