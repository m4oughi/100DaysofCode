#include <iostream>
#include <map>
#include <optional>

std::optional<std::string> getValue(const std::map<int, std::string>& students, int key) {
    auto it = students.find(key);
    if (it != students.end()) {
        return it->second;
    }
    return std::nullopt;
}

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    auto result = getValue(students, 3);
    if (result) {
        std::cout << "Found: " << *result << "\n";
    } else {
        std::cout << "Key not found\n";
    }

    return 0;
}
