#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {
        {1, "Alice"},
        {2, "Bob"},
        {3, "Charlie"}
    };

    for (const auto &pair : students) {
        std::cout << "ID: " << pair.first << ", Name: " << pair.second << "\n";
    }
    return 0;
}
