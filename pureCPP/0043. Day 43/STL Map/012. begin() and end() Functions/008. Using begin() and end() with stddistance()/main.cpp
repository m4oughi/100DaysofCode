#include <iostream>
#include <map>
#include <iterator>

int main() {
    std::map<int, std::string> students = {{10, "Alice"}, {20, "Bob"}, {30, "Charlie"}};

    int count = std::distance(students.begin(), students.end());
    std::cout << "Number of elements: " << count << "\n";

    return 0;
}
