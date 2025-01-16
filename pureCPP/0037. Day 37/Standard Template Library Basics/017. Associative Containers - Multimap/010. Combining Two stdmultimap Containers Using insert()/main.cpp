#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> map1 = {{1, "Alice"}, {2, "Bob"}};
    std::multimap<int, std::string> map2 = {{1, "Charlie"}, {3, "Dave"}};

    map1.insert(map2.begin(), map2.end());  // Merge map2 into map1

    for (const auto &pair : map1) {
        std::cout << "ID: " << pair.first << ", Name: " << pair.second << "\n";
    }
    return 0;
}
