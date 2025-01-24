#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {-10, 20, -30, 40, -50, 60};
    std::vector<int> positives, negatives;

    std::partition_copy(vec.begin(), vec.end(), std::back_inserter(positives), std::back_inserter(negatives),
                        [](int x) { return x > 0; });

    std::cout << "Positive numbers: ";
    for (int num : positives) {
        std::cout << num << " ";
    }

    std::cout << "\nNegative numbers: ";
    for (int num : negatives) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
