#include <iostream>
#include <span>
#include <string_view>

void print_strings(std::span<std::string_view> words) {
    for (const auto& word : words) std::cout << word << " ";
    std::cout << "\n";
}

int main() {
    std::string arr[] = {"C++", "is", "awesome"};
    print_strings(arr);

    return 0;
}
