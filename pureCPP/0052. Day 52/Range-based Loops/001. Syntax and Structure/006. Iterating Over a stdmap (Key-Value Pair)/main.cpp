#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> studentGrades = {{1, "A"}, {2, "B"}, {3, "C"}};

    for (const auto& entry : studentGrades) {
        std::cout << "Student " << entry.first << " has grade " << entry.second << std::endl;
    }

    return 0;
}
