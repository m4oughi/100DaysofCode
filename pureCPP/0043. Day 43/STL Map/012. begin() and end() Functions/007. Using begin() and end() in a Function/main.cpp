#include <iostream>
#include <map>

void printMap(std::map<int, std::string>::iterator begin, std::map<int, std::string>::iterator end) {
    while (begin != end) {
        std::cout << begin->first << " -> " << begin->second << "\n";
        ++begin;
    }
}

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    std::cout << "Printing from function:\n";
    printMap(students.begin(), students.end());

    return 0;
}
