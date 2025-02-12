#include <iostream>
#include <map>

int main() {
    std::map<int, std::map<std::string, int>> studentScores = {
        {1, {{"Math", 90}, {"English", 85}}},
        {2, {{"Math", 80}}}
    };

    std::cout << "Total students: " << studentScores.size() << "\n";
    std::cout << "Subjects for Student 1: " << studentScores[1].size() << "\n";

    return 0;
}
