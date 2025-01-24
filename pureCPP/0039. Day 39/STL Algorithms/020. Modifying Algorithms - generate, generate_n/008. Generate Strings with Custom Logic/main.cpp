#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> strings(5);
    char base = 'A';

    std::generate(strings.begin(), strings.end(), [&base]() {
        return std::string(3, base++);
    });

    std::cout << "Generated strings: ";
    for (const auto& str : strings) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
