#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    // Using reverse iterator
    std::vector<int>::reverse_iterator rit;
    for (rit = numbers.rbegin(); rit != numbers.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    return 0;
}
