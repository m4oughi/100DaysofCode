#include <iostream>

int main() {
    const char* json = R"({
        "name": "Alice",
        "age": 25
    })";

    std::cout << "JSON Data:\n" << json << std::endl;

    return 0;
}
