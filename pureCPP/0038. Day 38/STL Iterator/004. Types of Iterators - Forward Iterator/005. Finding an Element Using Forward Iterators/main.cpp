#include <iostream>
#include <forward_list>
#include <algorithm>

int main() {
    std::forward_list<int> numbers = {10, 20, 30, 40};

    auto it = std::find(numbers.begin(), numbers.end(), 30);

    if (it != numbers.end()) {
        std::cout << "Found: " << *it << std::endl;
    } else {
        std::cout << "Not found." << std::endl;
    }

    return 0;
}
