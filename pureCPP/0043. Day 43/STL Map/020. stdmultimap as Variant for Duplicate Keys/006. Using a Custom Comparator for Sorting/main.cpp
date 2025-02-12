#include <iostream>
#include <map>

struct Descending {
    bool operator()(int a, int b) const {
        return a > b; // Sort in descending order
    }
};

int main() {
    std::multimap<int, std::string, Descending> tasks = {
        {1, "Low Priority"}, {3, "High Priority"}, {2, "Medium Priority"}
    };

    for (const auto& [priority, task] : tasks) {
        std::cout << "Priority " << priority << ": " << task << "\n";
    }

    return 0;
}
