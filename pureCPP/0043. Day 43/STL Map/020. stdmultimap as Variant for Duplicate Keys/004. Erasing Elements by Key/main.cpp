#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> books = {
        {1, "C++ Primer"}, {2, "Effective C++"}, {1, "The C++ Programming Language"}
    };

    books.erase(1);  // Removes all books with ID 1

    std::cout << "Remaining books:\n";
    for (const auto& [key, value] : books) {
        std::cout << key << " -> " << value << "\n";
    }

    return 0;
}
