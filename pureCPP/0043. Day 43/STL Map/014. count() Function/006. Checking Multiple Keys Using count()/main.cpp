#include <iostream>
#include <map>
#include <vector>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {3, "Charlie"}, {5, "Eve"}};
    std::vector<int> keysToCheck = {1, 2, 3, 4, 5};

    for (int key : keysToCheck) {
        std::cout << "Key " << key << (students.count(key) ? " exists\n" : " does not exist\n");
    }

    return 0;
}
