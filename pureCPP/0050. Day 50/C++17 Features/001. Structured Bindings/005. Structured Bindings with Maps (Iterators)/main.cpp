#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> data = {{1, "One"}, {2, "Two"}};

    for (const auto& [key, value] : data) {
        std::cout << "Key: " << key << ", Value: " << value << '\n';
    }
    return 0;
}
