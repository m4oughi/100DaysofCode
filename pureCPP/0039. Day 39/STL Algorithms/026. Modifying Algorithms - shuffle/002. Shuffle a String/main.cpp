#include <iostream>
#include <string>
#include <algorithm>
#include <random>

int main() {
    std::string str = "abcdef";
    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(str.begin(), str.end(), generator);

    std::cout << "Shuffled string: " << str << std::endl;

    return 0;
}
