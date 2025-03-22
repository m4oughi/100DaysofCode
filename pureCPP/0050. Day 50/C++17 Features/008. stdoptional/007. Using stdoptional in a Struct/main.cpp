#include <iostream>
#include <optional>

struct Config {
    std::optional<int> maxUsers;
    std::optional<std::string> serverName;
};

int main() {
    Config config{100, std::nullopt};

    std::cout << "Max Users: " << config.maxUsers.value_or(-1) << '\n';
    std::cout << "Server Name: " << config.serverName.value_or("DefaultServer") << '\n';

    return 0;
}
