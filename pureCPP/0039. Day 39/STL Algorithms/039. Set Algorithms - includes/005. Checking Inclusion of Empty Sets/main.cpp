#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> superset = {1, 2, 3, 4, 5};
    std::vector<int> subset;

    if (std::includes(superset.begin(), superset.end(), subset.begin(), subset.end())) {
        std::cout << "An empty subset is always included in the superset.\n";
    } else {
        std::cout << "Subset is not included in the superset.\n";
    }

    return 0;
}
