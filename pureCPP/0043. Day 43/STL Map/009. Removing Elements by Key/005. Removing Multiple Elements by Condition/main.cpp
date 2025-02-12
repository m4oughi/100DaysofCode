#include <iostream>
#include <map>

int main() {
    std::map<int, int> scores = {{1, 90}, {2, 70}, {3, 85}, {4, 60}, {5, 50}};

    for (auto it = scores.begin(); it != scores.end(); ) {
        if (it->second < 65) { // Remove students who scored less than 65
            it = scores.erase(it);
        } else {
            ++it;
        }
    }

    std::cout << "Updated Scores:\n";
    for (const auto& entry : scores) {
        std::cout << "Student " << entry.first << " -> Score: " << entry.second << "\n";
    }

    return 0;
}
