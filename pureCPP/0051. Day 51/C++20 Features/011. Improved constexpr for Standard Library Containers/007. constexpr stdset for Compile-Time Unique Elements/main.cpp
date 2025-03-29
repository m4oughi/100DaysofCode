#include <set>
#include <iostream>

constexpr std::set<int> create_set() {
    return {1, 2, 3, 3, 2, 1};  // Duplicates are removed
}

int main() {
    constexpr std::set<int> my_set = create_set();

    for (int num : my_set) {
        std::cout << num << " ";
    }
}
