#include <iostream>
#include <map>
#include <cmath>

int findClosestKey(std::map<int, std::string>& students, int key) {
    auto range = students.equal_range(key);

    if (range.first == students.begin()) return range.first->first;
    if (range.first == students.end()) return std::prev(range.first)->first;

    auto prev_it = std::prev(range.first);
    return (abs(prev_it->first - key) <= abs(range.first->first - key)) ? prev_it->first : range.first->first;
}

int main() {
    std::map<int, std::string> students = {{10, "Alice"}, {20, "Bob"}, {30, "Charlie"}};

    int key = 25;
    int closest = findClosestKey(students, key);
    std::cout << "Closest key to " << key << " is " << closest << "\n";

    return 0;
}
