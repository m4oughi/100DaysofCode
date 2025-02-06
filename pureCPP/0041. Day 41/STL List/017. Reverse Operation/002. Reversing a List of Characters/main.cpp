#include <iostream>
#include <list>

int main() {
    std::list<char> letters = {'A', 'B', 'C', 'D', 'E'};

    letters.reverse(); // Reverse the list

    std::cout << "Reversed List: ";
    for (char ch : letters) std::cout << ch << " ";

    return 0;
}
