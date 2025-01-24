#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> salaries = {3000, 4000, 5000, 3500, 4500, 5500};

    // The first half [3000, 4000, 5000] and the second half [3500, 4500, 5500] are sorted.
    std::inplace_merge(salaries.begin(), salaries.begin() + 3, salaries.end());

    std::cout << "Merged salaries: ";
    for (int salary : salaries) {
        std::cout << salary << " ";
    }

    return 0;
}
