#include <iostream>
#include <unordered_multiset>

int main() {
    std::unordered_multiset<int> numbers = {1, 2, 3, 3, 4, 5};

    int to_count = 3;
    std::cout << to_count << " appears " << numbers.count(to_count) << " times.\n";

    return 0;
}
