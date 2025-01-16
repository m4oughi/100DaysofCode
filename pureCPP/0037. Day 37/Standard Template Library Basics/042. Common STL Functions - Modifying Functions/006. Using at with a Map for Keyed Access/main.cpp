#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> mp = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    std::cout << "Value at key 2: " << mp.at(2) << "\n";

    try {
        std::cout << "Trying out-of-range access: " << mp.at(5) << "\n";
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << "\n";
    }

    return 0;
}
