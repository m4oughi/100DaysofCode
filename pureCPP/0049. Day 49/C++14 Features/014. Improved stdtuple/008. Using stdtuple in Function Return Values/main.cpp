#include <iostream>
#include <tuple>

std::tuple<std::string, int, double> getPersonInfo() {
    return {"Alice", 25, 72.5};
}

int main() {
    auto person = getPersonInfo();

    std::cout << "Name: " << std::get<0>(person) << "\n";
    std::cout << "Age: " << std::get<1>(person) << "\n";
    std::cout << "Weight: " << std::get<2>(person) << "\n";

    return 0;
}
