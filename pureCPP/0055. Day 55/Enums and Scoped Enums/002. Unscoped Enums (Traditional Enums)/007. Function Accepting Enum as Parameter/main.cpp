#include <iostream>

enum LightState { On, Off };

void setLight(LightState state) {
    std::cout << (state == On ? "Light is ON" : "Light is OFF") << std::endl;
}

int main() {
    setLight(Off);
}
