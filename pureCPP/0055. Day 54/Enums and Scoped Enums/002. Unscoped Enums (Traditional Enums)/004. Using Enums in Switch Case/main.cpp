#include <iostream>

enum Menu { Start, Load, Exit };

void handleMenu(Menu option) {
    switch (option) {
        case Start: std::cout << "Game Started\n"; break;
        case Load: std::cout << "Game Loaded\n"; break;
        case Exit: std::cout << "Exiting...\n"; break;
    }
}

int main() {
    handleMenu(Load);
}
