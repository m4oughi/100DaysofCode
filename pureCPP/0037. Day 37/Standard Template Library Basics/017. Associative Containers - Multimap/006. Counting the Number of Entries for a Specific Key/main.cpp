#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> employees = {{1, "Alice"}, {2, "Bob"}, {1, "Charlie"}};

    int count = employees.count(1);
    std::cout << "Number of employees with ID 1: " << count << "\n";

    return 0;
}
