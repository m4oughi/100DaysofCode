#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {2, 4, 6, 8};

    for (auto num : numbers) { // 'auto' deduces int
        std::cout << num * 2 << " "; // Print double values
    }

    return 0;
}
