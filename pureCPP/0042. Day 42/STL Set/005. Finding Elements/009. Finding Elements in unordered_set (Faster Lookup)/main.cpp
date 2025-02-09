#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset = {50, 20, 10};

    int key = 20;
    if (uset.find(key) != uset.end()) {
        std::cout << key << " found in unordered_set.";
    } else {
        std::cout << key << " not found.";
    }
    return 0;
}
