#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3};
    for (int &x : vec) {
        x *= 2;  // Modifies elements directly
    }

    return 0;
}