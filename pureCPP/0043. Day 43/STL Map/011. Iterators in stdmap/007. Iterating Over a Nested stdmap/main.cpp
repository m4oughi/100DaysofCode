#include <iostream>
#include <map>

int main() {
    std::map<int, std::map<std::string, int>> studentScores = {
        {1, {{"Math", 90}, {"English", 85}}},
        {2, {{"Math", 80}, {"English", 75}}}
    };

    for (const auto& student : studentScores) {
        std::cout << "Student " << student.first << ":\n";
        for (const auto& subject : student.second) {
            std::cout << "  " << subject.first << " -> " << subject.second << "\n";
        }
    }

    return 0;
}
