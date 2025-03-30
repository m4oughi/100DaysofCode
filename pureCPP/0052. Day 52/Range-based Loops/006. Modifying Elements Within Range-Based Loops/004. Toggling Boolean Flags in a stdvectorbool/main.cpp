#include <iostream>
#include <vector>

int main() {
    std::vector<bool> flags = {true, false, true, false};

    for (bool& flag : flags) { // Using reference to modify booleans
        flag = !flag;
    }

    for (const bool& flag : flags) {
        std::cout << flag << " ";
    }

    return 0;
}
