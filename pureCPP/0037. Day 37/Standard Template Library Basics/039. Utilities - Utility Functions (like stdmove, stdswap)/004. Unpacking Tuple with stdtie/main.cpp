#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, std::string> t(1, "Alice");

    int id;
    std::string name;
    std::tie(id, name) = t;

    std::cout << "ID: " << id << ", Name: " << name << "\n";

    return 0;
}
