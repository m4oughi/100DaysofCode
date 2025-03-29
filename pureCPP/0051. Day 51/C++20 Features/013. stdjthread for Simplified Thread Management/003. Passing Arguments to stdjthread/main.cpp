#include <iostream>
#include <thread>

void print_message(const std::string& msg) {
    std::cout << msg << "\n";
}

int main() {
    std::jthread t(print_message, "Hello from jthread with arguments!");
    return 0;
}
