#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_multimap<std::string, int> grades = {{"Alice", 85}, {"Alice", 90}, {"Bob", 75}};

    std::cout << "Number of grades for Alice: " << grades.count("Alice") << "\n";
    std::cout << "Number of grades for Bob: " << grades.count("Bob") << "\n";

    return 0;
}
