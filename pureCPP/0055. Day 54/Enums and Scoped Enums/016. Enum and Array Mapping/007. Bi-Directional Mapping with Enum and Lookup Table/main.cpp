#include <iostream>
#include <map>
#include <string>

enum class Planet { Earth, Mars, Venus };

struct PlanetInfo {
    std::string name;
    double gravity;
};

const PlanetInfo planetTable[] = {
    {"Earth", 9.81},
    {"Mars", 3.71},
    {"Venus", 8.87}
};

std::map<std::string, Planet> nameToPlanet = {
    {"Earth", Planet::Earth},
    {"Mars", Planet::Mars},
    {"Venus", Planet::Venus}
};

int main() {
    Planet p = Planet::Mars;
    std::cout << "Gravity on Mars: " << planetTable[static_cast<int>(p)].gravity << "\n";

    std::string userInput = "Venus";
    Planet chosen = nameToPlanet[userInput];
    std::cout << "You selected: " << planetTable[static_cast<int>(chosen)].name << "\n";
}
