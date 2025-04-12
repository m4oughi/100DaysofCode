#include <iostream>
#include <string>

enum class TrafficLight {
    Red,
    Yellow,
    Green
};

std::string toString(TrafficLight light) {
    switch (light) {
        case TrafficLight::Red: return "Red";
        case TrafficLight::Yellow: return "Yellow";
        case TrafficLight::Green: return "Green";
        default: return "Unknown";
    }
}

int main() {
    std::cout << toString(TrafficLight::Green) << "\n";
}
