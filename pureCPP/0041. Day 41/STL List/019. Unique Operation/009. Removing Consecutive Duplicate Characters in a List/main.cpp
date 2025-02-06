#include <iostream>
#include <list>

int main() {
    std::list<char> characters = {'a', 'a', 'b', 'b', 'c', 'c', 'a', 'a'};

    characters.unique();

    std::cout << "List after unique operation: ";
    for (char ch : characters) std::cout << ch << " ";

    return 0;
}
