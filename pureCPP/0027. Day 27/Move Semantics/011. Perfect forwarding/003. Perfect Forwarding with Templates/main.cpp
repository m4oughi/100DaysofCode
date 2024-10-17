#include <iostream>
#include <string>

template <typename T>
void logAndProcess(T&& val) {
    std::cout << "Logging value" << std::endl;
    process(std::forward<T>(val));  // Perfect forwarding
}

void process(const std::string& s) { std::cout << "Processing lvalue string: " << s << std::endl; }
void process(std::string&& s) { std::cout << "Processing rvalue string: " << s << std::endl; }

int main() {
    std::string str = "Hello";
    logAndProcess(str);        // Lvalue string passed
    logAndProcess("World");    // Rvalue string passed
}
