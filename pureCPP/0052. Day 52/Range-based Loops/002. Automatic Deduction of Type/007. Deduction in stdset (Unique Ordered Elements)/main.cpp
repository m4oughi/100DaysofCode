#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 5, 8, 3, 15};

    for (auto num : numbers) { // `auto` deduces `int`
        std::cout << num << " ";
    }

    return 0;
}
