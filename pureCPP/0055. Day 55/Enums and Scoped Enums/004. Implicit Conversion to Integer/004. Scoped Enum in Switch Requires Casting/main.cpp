#include <iostream>

enum class State { Init = 1, Running = 2, Stopped = 3 };

int main() {
    State s = State::Running;

    switch (static_cast<int>(s)) {
        case 1: std::cout << "Initializing\n"; break;
        case 2: std::cout << "Running\n"; break;
        case 3: std::cout << "Stopped\n"; break;
    }
}
