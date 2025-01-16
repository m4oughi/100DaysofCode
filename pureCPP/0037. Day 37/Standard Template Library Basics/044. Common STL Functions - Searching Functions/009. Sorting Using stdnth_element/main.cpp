#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 3, 5, 7, 9};

    bool hasEven = std::any_of(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; }); // Check if any number is even
    std::cout << (hasEven ? "There is an even number" : "All numbers are odd") << "\n";

    return 0;
}
