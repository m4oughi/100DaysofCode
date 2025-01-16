#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {2, 4, 6, 8};

    bool allEven = std::all_of(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; }); // Check if all numbers are even
    std::cout << (allEven ? "All numbers are even" : "Not all numbers are even") << "\n";

    return 0;
}
