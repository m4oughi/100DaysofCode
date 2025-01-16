#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {5, 3, 2, 4, 1};

    std::cout << "vec1 is sorted: " << std::boolalpha << std::is_sorted(vec1.begin(), vec1.end()) << "\n";
    std::cout << "vec2 is sorted: " << std::boolalpha << std::is_sorted(vec2.begin(), vec2.end()) << "\n";

    return 0;
}
