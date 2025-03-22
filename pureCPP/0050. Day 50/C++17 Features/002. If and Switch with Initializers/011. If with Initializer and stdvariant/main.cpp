#include <iostream>
#include <variant>

int main() {
    std::variant<int, double> var = 3.14;

    if (auto pval = std::get_if<double>(&var); pval) {
        std::cout << "Double value: " << *pval << '\n';
    } else {
        std::cout << "Variant does not hold a double.\n";
    }
    return 0;
}
