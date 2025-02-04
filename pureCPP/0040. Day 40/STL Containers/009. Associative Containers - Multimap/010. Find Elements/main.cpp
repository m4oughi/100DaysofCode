#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> mm = {
        {1, "One"}, {2, "Two"}, {2, "Another Two"}};

    auto it = mm.find(2);
    if (it != mm.end()) {
        std::cout << "First value for key 2: " << it->second << "\n";
    }

    return 0;
}
