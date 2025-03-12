#include <iostream>

int main() {
    std::string multiline = R"(This is a
multi-line raw string.
No need for newline escape characters!)";

    std::cout << multiline << std::endl;
    return 0;
}
