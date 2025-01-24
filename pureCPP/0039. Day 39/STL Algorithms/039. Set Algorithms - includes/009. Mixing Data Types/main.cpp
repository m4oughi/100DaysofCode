#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<float> superset = {1.1f, 2.2f, 3.3f, 4.4f};
    std::vector<int> subset = {2, 3};

    if (std::includes(
            superset.begin(), superset.end(),
            subset.begin(), subset.end(),
            [](float a, int b) { return a < b; })) {
        std::cout << "Subset is included in the superset.\n";
    } else {
        std::cout << "Subset is not included in the superset.\n";
    }

    return 0;
}
