#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> numbers;

    numbers[3] = "Three";
    numbers[1] = "One";
    numbers[4] = "Four";
    numbers[2] = "Two";

    std::cout << "Elements in ascending order:\n";
    for (const auto& entry : numbers) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
