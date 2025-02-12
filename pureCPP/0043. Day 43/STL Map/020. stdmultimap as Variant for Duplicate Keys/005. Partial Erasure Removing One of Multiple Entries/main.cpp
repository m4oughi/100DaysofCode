#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> movies = {
        {1, "Inception"}, {2, "Interstellar"}, {1, "Tenet"}
    };

    auto it = movies.find(1);  // Find first occurrence of key 1
    if (it != movies.end()) {
        movies.erase(it);  // Removes only the first occurrence
    }

    std::cout << "Movies after partial erasure:\n";
    for (const auto& [key, value] : movies) {
        std::cout << key << " -> " << value << "\n";
    }

    return 0;
}
