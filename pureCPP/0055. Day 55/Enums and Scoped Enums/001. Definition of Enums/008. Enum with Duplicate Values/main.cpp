#include <iostream>

enum Level { Beginner = 1, Intermediate = 2, Advanced = 2, Expert = 3 };

int main() {
    Level level = Advanced;
    std::cout << "Advanced level value: " << level << std::endl;
}
