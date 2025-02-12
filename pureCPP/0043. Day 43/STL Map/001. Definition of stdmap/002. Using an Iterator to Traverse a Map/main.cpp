#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> countryCodes = {
        {1, "USA"},
        {44, "UK"},
        {91, "India"}
    };

    std::cout << "Country Codes:\n";
    for (auto it = countryCodes.begin(); it != countryCodes.end(); ++it) {
        std::cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
