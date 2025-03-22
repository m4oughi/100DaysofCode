#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> employees = {{301, "Frank"}};

    auto [it, success] = employees.insert_or_assign(301, "Grace"); // Overwrites

    std::cout << "Updated: " << it->first << " - " << it->second << "\n";
    return 0;
}
