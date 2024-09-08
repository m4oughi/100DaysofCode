#include <iostream>
#include <vector>

int main() {
    std::vector<std::pair<int, std::string>> id_name_pairs = {
        {1, "Alice"},
        {2, "Bob"},
        {3, "Charlie"}
    };

    std::cout << "ID and Name pairs:" << std::endl;
    for (const auto& [id, name] : id_name_pairs) {
        std::cout << "ID: " << id << ", Name: " << name << std::endl;
    }

    return 0;
}
