#include <iostream>
#include <string>

enum class Weather { Sunny, Rainy, Snowy, Count };

const std::string weatherMessages[] = {
    "It's sunny today!",
    "Bring an umbrella.",
    "Time to build a snowman!"
};

int main() {
    Weather w = Weather::Snowy;
    std::cout << weatherMessages[static_cast<int>(w)] << "\n";
}
