#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    int target = 25;

    auto it = std::lower_bound(numbers.begin(), numbers.end(), target);

    std::cout << "First position to insert " << target << ": " 
              << (it - numbers.begin()) << "\n";
    return 0;
}
