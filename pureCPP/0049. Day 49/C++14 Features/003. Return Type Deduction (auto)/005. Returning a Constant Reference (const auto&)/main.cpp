#include <iostream>
#include <string>

const auto& getMessage() {
    static std::string message = "Hello, C++14!";
    return message;
}

int main() {
    std::cout << getMessage() << std::endl;
    return 0;
}
