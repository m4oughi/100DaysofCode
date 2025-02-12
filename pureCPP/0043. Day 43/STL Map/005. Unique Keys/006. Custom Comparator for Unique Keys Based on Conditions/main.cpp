#include <iostream>
#include <map>

struct CustomCompare {
    bool operator()(int a, int b) const {
        return (a / 10) < (b / 10); // Groups numbers by tens
    }
};

int main() {
    std::map<int, std::string, CustomCompare> groupedNumbers;

    groupedNumbers[15] = "Group A";
    groupedNumbers[25] = "Group B";
    groupedNumbers[17] = "Group C"; // Will overwrite 15

    std::cout << "Unique Key Grouping:\n";
    for (const auto& entry : groupedNumbers) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
