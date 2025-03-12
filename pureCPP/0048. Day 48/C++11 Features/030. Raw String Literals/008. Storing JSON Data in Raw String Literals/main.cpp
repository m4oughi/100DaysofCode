#include <iostream>

int main() {
    std::string json = R"({
        "name": "John Doe",
        "age": 30,
        "email": "john.doe@example.com"
    })";

    std::cout << "JSON Data:\n" << json << std::endl;
    return 0;
}
