#include <iostream>

int main() {
    const char* custom_delim = R"custom(This is a "quoted" string)custom";

    std::cout << custom_delim << std::endl;

    return 0;
}
