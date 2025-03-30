#include <iostream>
#include <set>

int main() {
    std::set<char> letters = {'A', 'B', 'C', 'D'};

    for (const char& ch : letters) {
        std::cout << ch << " ";
    }

    return 0;
}
