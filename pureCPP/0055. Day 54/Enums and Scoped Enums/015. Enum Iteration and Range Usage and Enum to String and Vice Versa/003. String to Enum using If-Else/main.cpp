#include <iostream>
#include <string>

enum class Command {
    Start,
    Stop,
    Pause
};

Command fromString(const std::string& str) {
    if (str == "Start") return Command::Start;
    else if (str == "Stop") return Command::Stop;
    else if (str == "Pause") return Command::Pause;
    else throw std::invalid_argument("Invalid string");
}

int main() {
    std::string input = "Stop";
    Command cmd = fromString(input);
    std::cout << "Parsed Command enum value.\n";
}
