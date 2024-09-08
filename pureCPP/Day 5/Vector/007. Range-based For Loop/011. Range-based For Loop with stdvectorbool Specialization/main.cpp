#include <iostream>
#include <vector>

int main() {
    std::vector<bool> flags = {true, false, true, false};

    std::cout << "Boolean values in the vector:" << std::endl;
    for (bool flag : flags) {
        std::cout << std::boolalpha << flag << " ";
    }

    return 0;
}
