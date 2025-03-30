#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    for (const auto& entry : students) { // `entry` is a `std::pair<const int, std::string>`
        std::cout << "ID: " << entry.first << ", Name: " << entry.second << std::endl;
    }

    return 0;
}
