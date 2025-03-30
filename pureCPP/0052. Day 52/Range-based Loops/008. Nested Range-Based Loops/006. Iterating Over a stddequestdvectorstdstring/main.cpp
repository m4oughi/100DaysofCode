#include <iostream>
#include <deque>
#include <vector>
#include <string>

int main() {
    std::deque<std::vector<std::string>> groups = {
        {"Alice", "Bob"},
        {"Charlie", "David"},
        {"Eve", "Frank"}
    };

    for (const auto& group : groups) {
        for (const auto& name : group) {
            std::cout << name << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
