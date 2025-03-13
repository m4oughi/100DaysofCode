#include <iostream>
#include <utility>

enum class State { Idle, Running, Stopped };

void transitionState(State& current, State new_state) {
    State old_state = std::exchange(current, new_state);
    std::cout << "Transitioned from " << static_cast<int>(old_state) 
              << " to " << static_cast<int>(new_state) << "\n";
}

int main() {
    State machine_state = State::Idle;

    transitionState(machine_state, State::Running);
    transitionState(machine_state, State::Stopped);

    return 0;
}
