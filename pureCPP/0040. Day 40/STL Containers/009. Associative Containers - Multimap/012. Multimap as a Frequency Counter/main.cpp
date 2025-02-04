#include <iostream>
#include <map>
#include <vector>

int main() {
    std::vector<std::string> data = {"apple", "banana", "apple", "orange", "banana"};
    std::multimap<std::string, int> frequency;

    for (int i = 0; i < data.size(); ++i) {
        frequency.insert({data[i], i});
    }

    for (const auto& [key, value] : frequency) {
        std::cout << key << ": " << value << "\n";
    }

    return 0;
}
