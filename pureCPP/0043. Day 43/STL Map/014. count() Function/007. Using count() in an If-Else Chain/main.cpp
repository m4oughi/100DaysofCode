#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {3, "Charlie"}, {5, "Eve"}};

    int searchKey = 3;

    if (students.count(searchKey)) {
        std::cout << "Key " << searchKey << " found: " << students[searchKey] << "\n";
    } else {
        std::cout << "Key " << searchKey << " not found\n";
    }

    return 0;
}
