#include <iostream>
#include <utility>

int main() {
    std::pair<int, std::string> p(1, "Alice");
    std::cout << "ID: " << p.first << ", Name: " << p.second << "\n";
    return 0;
}
