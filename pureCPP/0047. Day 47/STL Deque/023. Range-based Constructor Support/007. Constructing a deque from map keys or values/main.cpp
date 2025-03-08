#include <iostream>
#include <deque>
#include <map>

int main() {
    std::map<int, std::string> myMap = {{1, "A"}, {2, "B"}, {3, "C"}, {4, "D"}};

    // Construct deque from keys
    std::deque<int> keys;
    for (const auto& pair : myMap) {
        keys.push_back(pair.first);
    }

    // Construct deque from values
    std::deque<std::string> values;
    for (const auto& pair : myMap) {
        values.push_back(pair.second);
    }

    std::cout << "Deque of keys: ";
    for (int key : keys) {
        std::cout << key << " ";
    }

    std::cout << "\nDeque of values: ";
    for (const std::string& value : values) {
        std::cout << value << " ";
    }

    return 0;
}
