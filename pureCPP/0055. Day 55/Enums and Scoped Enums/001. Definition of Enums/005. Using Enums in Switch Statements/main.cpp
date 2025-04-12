#include <iostream>

enum TrafficLight { Red, Yellow, Green };

void showMessage(TrafficLight light) {
    switch (light) {
        case Red: std::cout << "Stop!\n"; break;
        case Yellow: std::cout << "Caution!\n"; break;
        case Green: std::cout << "Go!\n"; break;
    }
}

int main() {
    showMessage(Yellow);
}
