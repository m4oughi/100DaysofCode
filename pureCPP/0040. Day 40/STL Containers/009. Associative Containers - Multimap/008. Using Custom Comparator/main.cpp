#include <iostream>
#include <map>

struct Descending {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    std::multimap<int, std::string, Descending> mm = {
        {1, "One"}, {2, "Two"}, {2, "Another Two"}};

    for (const auto& [key, value] : mm) {
        std::cout << key << ": " << value << "\n";
    }

    return 0;
}
