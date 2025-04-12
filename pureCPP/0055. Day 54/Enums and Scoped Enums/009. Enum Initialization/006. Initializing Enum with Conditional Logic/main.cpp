#include <iostream>

enum TrafficLight { Red, Yellow, Green };

TrafficLight getLight(int time) {
    if (time < 5) return Red;
    if (time < 10) return Yellow;
    return Green;
}

int main() {
    TrafficLight light = getLight(7);
    std::cout << "Traffic light: " << light << std::endl;
}
