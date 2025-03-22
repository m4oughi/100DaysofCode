#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> employees;
    
    auto [it, success] = employees.try_emplace(201, "Eve");

    if (success) {
        std::cout << "Inserted: " << it->first << " - " << it->second << "\n";
    } else {
        std::cout << "Key " << it->first << " already exists!\n";
    }

    return 0;
}
