#include <iostream>

class Device {
public:
    enum class State { Off, On, Standby };

    void setState(State s) { state = s; }
    State getState() const { return state; }

private:
    State state = State::Off;
};

int main() {
    Device d;
    d.setState(Device::State::On);

    if (d.getState() == Device::State::On) {
        std::cout << "Device is ON\n";
    }
}
