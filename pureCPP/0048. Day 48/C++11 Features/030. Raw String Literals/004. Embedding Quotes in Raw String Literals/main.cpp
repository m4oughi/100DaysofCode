#include <iostream>

int main() {
    std::string quote = R"(
        He said, "Raw strings allow using quotes without escaping!"
    )";

    std::cout << quote << std::endl;
    return 0;
}
