#include <iostream>
#include <map>
#include <algorithm>

int main() {
    std::map<int, std::string> students = {{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}};

    int count = std::count_if(students.begin(), students.end(),
                              [](const std::pair<int, std::string> &p) { return p.first % 2 == 0; });

    std::cout << "Count of students with even ID: " << count << "\n";
    return 0;
}
