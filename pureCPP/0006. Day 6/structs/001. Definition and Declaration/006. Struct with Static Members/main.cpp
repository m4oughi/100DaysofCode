#include <iostream>

struct Config {
    static int version;
    static std::string appName;
};

int Config::version = 1;
std::string Config::appName = "MyApp";


int main() {

    return 0;
}