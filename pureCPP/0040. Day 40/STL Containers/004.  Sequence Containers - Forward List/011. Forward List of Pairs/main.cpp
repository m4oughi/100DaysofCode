#include <iostream>
#include <forward_list>
#include <utility>

int main() {
    std::forward_list<std::pair<int, std::string>> flist;

    flist.emplace_front(1, "Alice");
    flist.emplace_front(2, "Bob");

    for (const auto& p : flist) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
