#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> map1 = {{1, "Alice"}, {2, "Bob"}};
    std::map<int, std::string> map2 = {{3, "Charlie"}, {4, "Dave"}};

    map1.insert(map2.begin(), map2.end());  // Merge map2 into map1

    for (const auto &pair : map1) {
        std::cout << "ID: " << pair.first << ", Name: " << pair.second << "\n";
    }
    return 0;
}
