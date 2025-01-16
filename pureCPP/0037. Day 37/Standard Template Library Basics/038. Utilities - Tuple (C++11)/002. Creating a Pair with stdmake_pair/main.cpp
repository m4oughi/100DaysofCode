#include <iostream>
#include <utility>

int main() {
    auto p = std::make_pair(2, "Bob");
    std::cout << "ID: " << p.first << ", Name: " << p.second << "\n";
    return 0;
}
