#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> us;

    if (us.empty()) {
        std::cout << "The unordered set is empty." << std::endl;
    }

    us.insert(10);
    if (!us.empty()) {
        std::cout << "The unordered set is no longer empty." << std::endl;
    }

    return 0;
}
