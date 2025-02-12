#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> books = {
        {1, "C++ Primer"},
        {2, "Effective C++"},
        {3, "Clean Code"}
    };

    std::cout << "Removing book with ID 2...\n";
    books.erase(2);

    for (const auto& book : books) {
        std::cout << book.first << " -> " << book.second << "\n";
    }

    return 0;
}
