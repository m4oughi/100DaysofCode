#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> employees1 = {{1, "Alice"}, {2, "Bob"}};
    std::map<int, std::string> employees2;

    employees2.insert(employees1.begin(), employees1.end()); // Bulk insert

    for (const auto& [key, value] : employees2) {
        std::cout << key << " - " << value << "\n";
    }

    return 0;
}
