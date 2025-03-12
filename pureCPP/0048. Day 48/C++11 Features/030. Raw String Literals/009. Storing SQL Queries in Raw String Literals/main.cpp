#include <iostream>

int main() {
    std::string query = R"(
        SELECT name, age FROM users WHERE age > 18 ORDER BY age DESC;
    )";

    std::cout << "SQL Query:\n" << query << std::endl;
    return 0;
}
