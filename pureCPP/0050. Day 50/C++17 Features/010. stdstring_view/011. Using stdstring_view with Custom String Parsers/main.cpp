#include <iostream>
#include <string_view>
#include <vector>

std::vector<std::string_view> split(std::string_view str, char delimiter) {
    std::vector<std::string_view> parts;
    size_t start = 0, end;
    
    while ((end = str.find(delimiter, start)) != std::string_view::npos) {
        parts.emplace_back(str.substr(start, end - start));
        start = end + 1;
    }
    parts.emplace_back(str.substr(start));

    return parts;
}

int main() {
    std::string_view data = "apple,banana,cherry";
    auto parts = split(data, ',');

    for (auto part : parts) {
        std::cout << part << '\n';
    }

    return 0;
}
