#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> source = {{"Alice", 30}, {"Bob", 20}};
    std::map<std::string, int> destination;

    destination.insert(source.begin(), source.end());

    for (const auto &entry : destination) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
    return 0;
}
