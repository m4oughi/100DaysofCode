#include <iostream>

int main() {
    const char* words[] = {"Hello", "World", "C++"};

    for (auto word : words) { // `auto` deduces `const char*`
        std::cout << word << " ";
    }

    return 0;
}
