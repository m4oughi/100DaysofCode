#include <iostream>
#include <map>

int main() {
    std::map<int, std::pair<std::string, double>> m;

    m[1] = {"Apple", 2.5};
    m[2] = {"Banana", 1.2};

    for (const auto& [key, value] : m) {
        std::cout << key << ": " << value.first << " - " << value.second << "\n";
    }

    return 0;
}
