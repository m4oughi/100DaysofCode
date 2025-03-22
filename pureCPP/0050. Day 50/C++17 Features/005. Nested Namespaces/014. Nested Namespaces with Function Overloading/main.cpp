#include <iostream>

namespace Converter::Temperature {
    double toCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 5 / 9;
    }

    double toFahrenheit(double celsius) {
        return (celsius * 9 / 5) + 32;
    }
}

int main() {
    std::cout << "100°F in Celsius: " << Converter::Temperature::toCelsius(100) << '\n';
    std::cout << "37°C in Fahrenheit: " << Converter::Temperature::toFahrenheit(37) << '\n';
    return 0;
}
