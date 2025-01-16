#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> numbers = {1, 2, 3, 4, 5};

    int to_check = 3;
    std::cout << to_check << (numbers.count(to_check) ? " is in the set.\n" : " is not in the set.\n");

    return 0;
}
