#include <iostream>
#include <forward_list>
#include <algorithm>

int main() {
    std::forward_list<int> numbers = {10, 20, 30, 40, 50};

    auto it = std::find(numbers.begin(), numbers.end(), 30);

    if (it != numbers.end()) {
        std::cout << "Element found: " << *it << "\n";
    } else {
        std::cout << "Element not found.\n";
    }
    return 0;
}
