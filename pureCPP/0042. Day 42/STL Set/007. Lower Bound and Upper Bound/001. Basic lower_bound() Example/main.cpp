#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};

    auto lb = numbers.lower_bound(25);
    
    if (lb != numbers.end()) {
        std::cout << "Lower bound of 25: " << *lb << std::endl;
    } else {
        std::cout << "No lower bound found.\n";
    }
    return 0;
}
