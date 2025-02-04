#include <iostream>
#include <map>
#include <vector>

int main() {
    std::vector<int> data = {1, 2, 2, 3, 3, 3};
    std::map<int, int> frequency;

    for (int val : data) {
        frequency[val]++;
    }

    for (const auto& [key, count] : frequency) {
        std::cout << key << ": " << count << "\n";
    }

    return 0;
}
