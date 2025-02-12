#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> cities;

    cities.insert({101, "New York"});
    cities.insert({102, "London"});
    cities.insert({103, "Tokyo"});

    for (const auto& city : cities) {
        std::cout << "City Code: " << city.first << " -> Name: " << city.second << "\n";
    }

    return 0;
}
