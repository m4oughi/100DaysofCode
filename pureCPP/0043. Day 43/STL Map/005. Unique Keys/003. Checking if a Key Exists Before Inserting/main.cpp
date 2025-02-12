#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;

    students[1] = "Alice";

    int key = 1;
    if (students.count(key) == 0) {
        students[key] = "Charlie";
    } else {
        std::cout << "Key " << key << " already exists with value: " << students[key] << "\n";
    }

    return 0;
}
