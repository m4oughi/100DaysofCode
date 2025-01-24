#include <iostream>
#include <set>
#include <vector>
#include <numeric>

int main() {
    std::set<int> unique_numbers = {1, 3, 5, 7, 9};
    std::vector<int> data(unique_numbers.begin(), unique_numbers.end());
    std::vector<int> inclusive_result(data.size());

    std::inclusive_scan(data.begin(), data.end(), inclusive_result.begin());

    std::cout << "Inclusive Scan on Set Elements: ";
    for (int num : inclusive_result) {
        std::cout << num << " ";
    }
    // Output: 1 4 9 16 25

    return 0;
}
