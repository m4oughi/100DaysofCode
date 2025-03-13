#include <iostream>

struct Config {
    constexpr static int max_users = 100;
    constexpr static double version = 1.1;
};

int main() {
    std::cout << "Max Users: " << Config::max_users << "\n";
    std::cout << "Version: " << Config::version << "\n";

    return 0;
}
