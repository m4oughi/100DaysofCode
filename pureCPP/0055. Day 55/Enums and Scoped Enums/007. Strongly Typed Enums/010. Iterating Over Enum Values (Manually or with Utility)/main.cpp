#include <iostream>

enum class TrafficLight { Red, Yellow, Green };

const char* toString(TrafficLight t) {
    switch (t) {
        case TrafficLight::Red: return "Red";
        case TrafficLight::Yellow: return "Yellow";
        case TrafficLight::Green: return "Green";
        default: return "Unknown";
    }
}

int main() {
    for (int i = 0; i <= static_cast<int>(TrafficLight::Green); ++i) {
        std::cout << toString(static_cast<TrafficLight>(i)) << "\n";
    }
}
