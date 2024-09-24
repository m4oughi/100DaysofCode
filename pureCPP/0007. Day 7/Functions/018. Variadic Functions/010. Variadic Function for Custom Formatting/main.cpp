#include <iostream>
#include <sstream>

template<typename... Args>
std::string customFormat(const std::string& format, Args... args) {
    std::ostringstream oss;
    int index = 0;
    ((oss << args << format[index++]), ...);
    return oss.str();
}

int main() {
    std::string formatted = customFormat("- ", 1, 2.5, "Hello", 'A');
    std::cout << "Formatted output: " << formatted << std::endl;

    return 0;
}
