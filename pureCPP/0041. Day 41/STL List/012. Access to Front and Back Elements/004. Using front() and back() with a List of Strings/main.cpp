#include <iostream>
#include <list>

int main() {
    std::list<std::string> words = {"Hello", "World", "C++", "STL"};

    std::cout << "First word: " << words.front() << std::endl;
    std::cout << "Last word: " << words.back() << std::endl;

    return 0;
}
