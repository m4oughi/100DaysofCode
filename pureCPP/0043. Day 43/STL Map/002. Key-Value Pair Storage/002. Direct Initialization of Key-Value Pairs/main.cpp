#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> countryCodes = {
        {1, "USA"},
        {44, "UK"},
        {91, "India"}
    };

    for (const auto& entry : countryCodes) {
        std::cout << "Code: " << entry.first << " -> Country: " << entry.second << "\n";
    }

    return 0;
}
