#include <iostream>
#include <map>

int main() {
    std::map<int, std::string, std::greater<int>> scores;

    scores[50] = "Average";
    scores[90] = "Excellent";
    scores[70] = "Good";

    std::cout << "Scores in descending order:\n";
    for (const auto& entry : scores) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    return 0;
}
