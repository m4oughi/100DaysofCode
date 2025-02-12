#include <iostream>
#include <map>
#include <cmath>

int findClosestKey(std::map<int, std::string>& students, int key) {
    auto lower = students.lower_bound(key);
    
    if (lower == students.begin()) return lower->first;
    if (lower == students.end()) return std::prev(lower)->first;

    auto prev_it = std::prev(lower);
    return (abs(prev_it->first - key) <= abs(lower->first - key)) ? prev_it->first : lower->first;
}

int main() {
    std::map<int, std::string> students = {{10, "Alice"}, {20, "Bob"}, {30, "Charlie"}};

    int key = 25;
    int closest = findClosestKey(students, key);
    std::cout << "Closest key to " << key << " is " << closest << "\n";

    return 0;
}
