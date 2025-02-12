#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;

    students.insert({1, "Alice"});
    students.insert({2, "Bob"});
    
    auto result = students.insert({1, "Charlie"}); // Will not replace "Alice"

    if (!result.second) {
        std::cout << "Insertion failed, key 1 already exists with value: " << students[1] << "\n";
    }

    return 0;
}
