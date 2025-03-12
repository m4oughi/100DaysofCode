#include <iostream>

int main() {
    const char* multiline = R"(
        This is a multi-line raw string.
        It spans multiple lines without escape sequences.
        "Quotes" and \backslashes\ are preserved.
    )";

    std::cout << "Multiline String:\n" << multiline << std::endl;

    return 0;
}
