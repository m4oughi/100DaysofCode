#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> grades = {90, 85, 80, 70, 55, 40};
    std::stable_partition(grades.begin(), grades.end(), [](int grade) { return grade >= 60; });

    auto it = std::partition_point(grades.begin(), grades.end(), [](int grade) { return grade >= 60; });

    if (it != grades.end()) {
        std::cout << "Partition point (first non-passing grade): " << *it << std::endl;
    } else {
        std::cout << "All grades are passing." << std::endl;
    }

    return 0;
}
