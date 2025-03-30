#include <iostream>
#include <map>
#include <vector>

int main() {
    std::map<std::string, std::vector<int>> studentGrades = {
        {"Alice", {90, 85, 88}},
        {"Bob", {75, 80, 82}},
        {"Charlie", {95, 92, 91}}
    };

    for (const auto& [name, grades] : studentGrades) {
        std::cout << name << ": ";
        for (const auto& grade : grades) {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
