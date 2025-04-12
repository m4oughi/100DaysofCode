#include <iostream>

enum class State { Idle, Running, Paused };

void printState(State s) {
    switch (s) {
        case State::Idle:    std::cout << "System is idle\n"; break;
        case State::Running: std::cout << "System is running\n"; break;
        case State::Paused:  std::cout << "System is paused\n"; break;
    }
}

int main() {
    State s = State::Running;
    printState(s);
}
