#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> mm = {
        {1, "One"}, {2, "Two"}, {2, "Another Two"}};

    std::cout << "Number of values for key 2: " << mm.count(2) << "\n";

    return 0;
}
