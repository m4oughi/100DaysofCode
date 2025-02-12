#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> data;
    
    // Insertions (O(log n))
    data.insert({10, "Ten"});
    data.insert({20, "Twenty"});
    data.insert({15, "Fifteen"});

    // Search (O(log n))
    if (data.find(20) != data.end()) {
        std::cout << "20 found in map.\n";
    }

    // Deletion (O(log n))
    data.erase(15);

    return 0;
}
