#include "precompiled.h"

int main() {
    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};
    for (const auto &name : names) {
        std::cout << name << std::endl;
    }
    return 0;
}
