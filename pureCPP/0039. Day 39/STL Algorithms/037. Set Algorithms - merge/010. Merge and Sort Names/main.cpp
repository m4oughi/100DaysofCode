#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> names1 = {"Alice", "Bob", "Charlie"};
    std::vector<std::string> names2 = {"Bob", "David", "Eve"};
    std::vector<std::string> result(names1.size() + names2.size());

    std::merge(names1.begin(), names1.end(), names2.begin(), names2.end(), result.begin());

    result.erase(std::unique(result.begin(), result.end()), result.end());

    std::cout << "Merged and unique names: ";
    for (const auto& name : result) {
        std::cout << name << " ";
    }

    return 0;
}
