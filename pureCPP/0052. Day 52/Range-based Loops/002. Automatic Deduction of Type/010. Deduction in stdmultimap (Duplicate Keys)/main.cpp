#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> studentGrades = {{1, "A"}, {1, "B"}, {2, "A"}, {3, "C"}};

    for (const auto& entry : studentGrades) { // `auto` deduces `std::pair<const int, std::string>`
        std::cout << "Student " << entry.first << " has grade " << entry.second << std::endl;
    }

    return 0;
}
