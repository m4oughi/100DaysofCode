#include <iostream>

enum class Key { A, E, I, O, U, B, C, D };

void checkVowel(Key k) {
    switch (k) {
        case Key::A:
        case Key::E:
        case Key::I:
        case Key::O:
        case Key::U:
            std::cout << "It's a vowel.\n";
            break;
        default:
            std::cout << "It's a consonant.\n";
    }
}

int main() {
    checkVowel(Key::E);
    checkVowel(Key::D);
}
