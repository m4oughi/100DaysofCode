#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> data = {100, 200, 300, 150, 400, 500};

    auto it = std::is_sorted_until(data.begin(), data.end());
    std::cout << "Sorting breaks at value: " << *it << "\n";
    return 0;
}
