#include <iostream>
#include <list>
#include <utility>

int main() {
    std::list<std::pair<int, std::string>> lst;

    lst.emplace_back(1, "Alice");
    lst.emplace_back(2, "Bob");

    for (const auto& p : lst) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
