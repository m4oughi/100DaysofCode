#include <iostream>
#include <unordered_map>

namespace Data::Cache {
    inline std::unordered_map<int, std::string> database;
}

int main() {
    Data::Cache::database[1] = "Alice";
    Data::Cache::database[2] = "Bob";

    std::cout << "User 1: " << Data::Cache::database[1] << '\n';
    std::cout << "User 2: " << Data::Cache::database[2] << '\n';
    return 0;
}
