#include <iostream>

enum class Mode { Edit, View };
enum class State { Edit, Pause }; // No conflict, because both are scoped

int main() {
    Mode m = Mode::Edit;
    State s = State::Edit; // OK, despite same name
}
