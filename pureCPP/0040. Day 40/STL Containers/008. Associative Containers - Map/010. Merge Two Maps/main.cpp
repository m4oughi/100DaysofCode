#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> map1 = {{1, "One"}, {2, "Two"}};
    std::map<int, std::string> map2 = {{3, "Three"}, {4, "Four"}};

    map1.insert(map2.begin(), map2.end());

    for (const auto& [key, value] : map1) {
        std::cout << key << ": " << value << "\n";
    }

    return 0;
}
