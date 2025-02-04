#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> mm1 = {{1, "One"}, {2, "Two"}};
    std::multimap<int, std::string> mm2 = {{2, "Another Two"}, {3, "Three"}};

    mm1.insert(mm2.begin(), mm2.end());

    for (const auto& [key, value] : mm1) {
        std::cout << key << ": " << value << "\n";
    }

    return 0;
}
