#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> employees = {{101, "Alice"}, {102, "Bob"}};

    auto [it, success] = employees.insert({101, "Charlie"}); // Duplicate key

    if (success) {
        std::cout << "Inserted: " << it->first << " - " << it->second << "\n";
    } else {
        std::cout << "Insertion failed, key " << it->first << " already exists with value: " << it->second << "\n";
    }

    return 0;
}
