#include <iostream>
#include <vector>

int main() {
    std::vector<bool> flags = {true, false, true, true};

    for (bool flag : flags) {
        std::cout << (flag ? "ON " : "OFF ");
    }

    return 0;
}
