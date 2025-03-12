#include <iostream>
#include <deque>

int main() {
    std::deque<char> letters = {'A', 'B', 'C', 'D'};

    for (char letter : letters) {
        std::cout << letter << " ";
    }

    return 0;
}
