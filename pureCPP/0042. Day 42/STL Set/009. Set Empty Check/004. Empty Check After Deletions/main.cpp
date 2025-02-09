#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {5, 10, 15};

    numbers.erase(5);
    numbers.erase(10);
    numbers.erase(15);

    if (numbers.empty()) {
        std::cout << "The set is now empty after deletions." << std::endl;
    }

    return 0;
}
