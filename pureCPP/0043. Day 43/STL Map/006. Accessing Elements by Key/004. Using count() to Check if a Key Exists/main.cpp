#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}};

    int key = 2;
    if (students.count(key)) {
        std::cout << "Student " << key << ": " << students[key] << "\n";
    } else {
        std::cout << "Key " << key << " does not exist!\n";
    }

    return 0;
}
