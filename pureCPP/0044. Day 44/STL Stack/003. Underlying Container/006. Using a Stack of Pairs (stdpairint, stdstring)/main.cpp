#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::stack<std::pair<int, std::string>, std::vector<std::pair<int, std::string>>> s;

    s.push({1, "Alice"});
    s.push({2, "Bob"});
    s.push({3, "Charlie"});

    while (!s.empty()) {
        std::cout << "ID: " << s.top().first << ", Name: " << s.top().second << std::endl;
        s.pop();
    }

    return 0;
}
