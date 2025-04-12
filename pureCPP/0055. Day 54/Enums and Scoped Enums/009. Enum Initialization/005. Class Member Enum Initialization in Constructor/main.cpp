#include <iostream>

class Sensor {
public:
    enum class State { Idle, Active, Error };

    Sensor() : current(State::Idle) {}

    void activate() {
        current = State::Active;
    }

private:
    State current;
};

int main() {
    Sensor s;
    std::cout << "Sensor created and initialized.\n";
}
