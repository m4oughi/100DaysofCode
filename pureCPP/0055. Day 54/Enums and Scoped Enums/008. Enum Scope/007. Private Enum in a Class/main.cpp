#include <iostream>

class Engine {
private:
    enum class State { Idle, Running };

public:
    void start() {
        state = State::Running;
        std::cout << "Engine running\n";
    }

private:
    State state = State::Idle;
};

int main() {
    Engine e;
    e.start();

    // Engine::State s = Engine::State::Running; ❌ Not allowed (private)
}
