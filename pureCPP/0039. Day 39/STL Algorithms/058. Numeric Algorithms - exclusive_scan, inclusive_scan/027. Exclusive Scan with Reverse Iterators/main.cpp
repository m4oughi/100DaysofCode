#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    std::vector<int> exclusive_result(data.size());

    std::exclusive_scan(data.rbegin(), data.rend(), exclusive_result.rbegin(), 0);

    std::cout << "Exclusive Scan with Reverse Iterators: ";
    for (int num : exclusive_result) {
        std::cout << num << " ";
    }
    // Output: 14 13 11 8 5

    return 0;
}
