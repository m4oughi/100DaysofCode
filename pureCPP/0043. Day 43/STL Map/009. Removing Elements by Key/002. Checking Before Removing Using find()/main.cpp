#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    int keyToRemove = 2;
    if (students.find(keyToRemove) != students.end()) {
        students.erase(keyToRemove);
        std::cout << "Key " << keyToRemove << " removed successfully.\n";
    } else {
        std::cout << "Key " << keyToRemove << " not found.\n";
    }

    return 0;
}
