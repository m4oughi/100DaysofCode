#include <iostream>
#include <map>

struct Descending {
    bool operator()(int a, int b) const {
        return a > b; // Sort keys in descending order
    }
};

int main() {
    std::map<int, std::string, Descending> m = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    for (const auto& [key, value] : m) {
        std::cout << key << ": " << value << "\n";
    }

    return 0;
}
