#include <iostream>
#include <tuple>
#include <string>

std::tuple<int, std::string, double> getStudentData() {
    return {1, "Alice", 85.5};
}

int main() {
    auto [id, name, score] = getStudentData();

    std::cout << "ID: " << id << ", Name: " << name << ", Score: " << score << "\n";

    return 0;
}
