#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<std::string> deck = {
        "Ace of Spades", "2 of Spades", "3 of Spades", "4 of Spades",
        "Ace of Hearts", "2 of Hearts", "3 of Hearts", "4 of Hearts"
    };

    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(deck.begin(), deck.end(), generator);

    std::cout << "Shuffled deck: \n";
    for (const auto& card : deck) {
        std::cout << card << "\n";
    }

    return 0;
}
