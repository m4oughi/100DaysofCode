#include <iostream>
#include <format>
#include <vector>

int main() {
    std::vector<std::format_args::format_arg> args = { std::format_arg("Alice"), std::format_arg(25) };
    std::string result = std::vformat("Name: {}, Age: {}", std::make_format_args("Alice", 25));

    std::cout << result << "\n";
    return 0;
}
