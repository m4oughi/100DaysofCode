#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> m = {{1, "One"}, {2, "Two"}};

    std::cout << "Key 1: " << m[1] << "\n";
    std::cout << "Key 2: " << m.at(2) << "\n";

    return 0;
}
