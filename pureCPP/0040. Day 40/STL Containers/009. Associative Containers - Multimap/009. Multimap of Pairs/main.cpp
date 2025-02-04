#include <iostream>
#include <map>
#include <utility>

int main() {
    std::multimap<int, std::pair<std::string, double>> mm;

    mm.insert({1, {"Apple", 2.5}});
    mm.insert({1, {"Banana", 1.2}});
    mm.insert({2, {"Cherry", 3.0}});

    for (const auto& [key, value] : mm) {
        std::cout << key << ": " << value.first << " - " << value.second << "\n";
    }

    return 0;
}
