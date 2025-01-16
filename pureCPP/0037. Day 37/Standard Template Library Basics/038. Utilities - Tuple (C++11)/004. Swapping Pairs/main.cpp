#include <iostream>
#include <utility>

int main() {
    std::pair<int, std::string> p1(1, "Alice");
    std::pair<int, std::string> p2(2, "Bob");

    std::cout << "Before swap:\n";
    std::cout << "p1: " << p1.first << ", " << p1.second << "\n";
    std::cout << "p2: " << p2.first << ", " << p2.second << "\n";

    p1.swap(p2);

    std::cout << "After swap:\n";
    std::cout << "p1: " << p1.first << ", " << p1.second << "\n";
    std::cout << "p2: " << p2.first << ", " << p2.second << "\n";

    return 0;
}
