#include <iostream>

enum class Choice { Play = 1, Exit = 0, Invalid = -1 };

Choice getUserChoice(int input) {
    switch (input) {
        case 1: return Choice::Play;
        case 0: return Choice::Exit;
        default: return Choice::Invalid;
    }
}

int main() {
    int userInput;
    std::cout << "Enter choice (1=Play, 0=Exit): ";
    std::cin >> userInput;

    Choice c = getUserChoice(userInput);
    std::cout << "You selected: " << static_cast<int>(c) << std::endl;
}
