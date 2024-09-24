#include <iostream>
#include <vector>
#include <string>
#include <utility>

int main() {
    std::vector<std::string> strings;
    std::string str = "Hello, World!";

    strings.push_back(std::move(str));

    std::cout << "Elements in the vector after move push_back:" << std::endl;
    for (const auto& s : strings) {
        std::cout << s << " ";
    }
    std::cout << "\nOriginal string after move: " << (str.empty() ? "empty" : str) << std::endl;

    return 0;
}
