#include <iostream>
#include <map>

int main() {
    std::map<int, int> scores = {{1, 90}, {2, 85}, {3, 78}};

    int key = 2;
    if (scores.count(key)) {
        scores[key] += 5; // Increase score by 5
    }

    std::cout << "Updated Scores:\n";
    for (const auto& entry : scores) {
        std::cout << "Student " << entry.first << " -> Score: " << entry.second << "\n";
    }

    return 0;
}
