#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset = {50, 20, 10};

    std::cout << "Elements in unordered_set: ";
    for (int num : uset) {
        std::cout << num << " ";
    }

    int key = 20;
    if (uset.find(key) != uset.end()) {
        std::cout << "\n" << key << " exists in unordered_set.";
    } else {
        std::cout << "\n" << key << " does not exist.";
    }
    return 0;
}
