#include <iostream>
#include <map>

int main() {
    std::map<int, std::map<std::string, int>> studentScores = {
        {1, {{"Math", 85}, {"English", 90}}},
        {2, {{"Math", 80}, {"English", 85}}}
    };

    studentScores[1].erase("Math"); // Removes Math score for student 1

    std::cout << "Updated Scores:\n";
    for (const auto& student : studentScores) {
        std::cout << "Student " << student.first << ":\n";
        for (const auto& subject : student.second) {
            std::cout << "  " << subject.first << " -> " << subject.second << "\n";
        }
    }

    return 0;
}
