#include <iostream>
#include <deque>

int main() {
    std::deque<char> letters = {'A', 'B', 'C', 'D'};

    for (auto letter : letters) { // `auto` deduces `char`
        std::cout << letter << " ";
    }

    return 0;
}
