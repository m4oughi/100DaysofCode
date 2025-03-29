#include <map>
#include <iostream>

constexpr std::map<int, const char*> create_map() {
    return {{1, "One"}, {2, "Two"}, {3, "Three"}};
}

int main() {
    constexpr std::map<int, const char*> my_map = create_map();

    std::cout << my_map.at(2) << "\n"; // Output: Two
}
