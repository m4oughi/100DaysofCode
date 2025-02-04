#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> mm = {
        {1, "One"}, {2, "Two"}, {2, "Another Two"}};

    for (auto it = mm.begin(); it != mm.end(); ++it) {
        std::cout << it->first << ": " << it->second << "\n";
    }

    return 0;
}
