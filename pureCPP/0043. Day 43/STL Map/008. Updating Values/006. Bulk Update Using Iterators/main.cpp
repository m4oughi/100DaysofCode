#include <iostream>
#include <map>

int main() {
    std::map<int, int> scores = {{1, 90}, {2, 85}, {3, 78}};

    for (auto& entry : scores) {
        entry.second += 5; // Increase each score by 5
    }

    std::cout << "Updated Scores:\n";
    for (const auto& entry : scores) {
        std::cout << "Student " << entry.first << " -> Score: " << entry.second << "\n";
    }

    return 0;
}
