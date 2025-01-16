#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {1, 2, 3, 4};
    int target = 3;

    if (numbers.find(target) != numbers.end()) {
        std::cout << target << " is in the set.\n";
    } else {
        std::cout << target << " is not in the set.\n";
    }
    return 0;
}
