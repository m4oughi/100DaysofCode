#include <iostream>

enum Mood { Happy, Sad, Angry };

int main() {
    const char* moodStr[] = { "Happy", "Sad", "Angry" };
    Mood current = Angry;
    std::cout << "Current mood: " << moodStr[current] << std::endl; // Implicit conversion to index
}
