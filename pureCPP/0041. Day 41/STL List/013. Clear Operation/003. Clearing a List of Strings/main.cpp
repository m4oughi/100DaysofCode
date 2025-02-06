#include <iostream>
#include <list>

int main() {
    std::list<std::string> words = {"Hello", "World", "STL"};

    std::cout << "Size before clear: " << words.size() << std::endl;
    words.clear();
    std::cout << "Size after clear: " << words.size() << std::endl;

    return 0;
}
