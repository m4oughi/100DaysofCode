#include <iostream>
#include <compare>
#include <cmath>

class Temperature {
public:
    double value;

    Temperature(double v) : value(v) {}

    std::partial_ordering operator<=>(const Temperature& other) const {
        if (std::isnan(value) || std::isnan(other.value))
            return std::partial_ordering::unordered; // NaN case
        return value <=> other.value;
    }
};

int main() {
    Temperature t1(36.5), t2(NAN);

    if (t1 < t2) std::cout << "t1 is colder\n";
    else if (t1 > t2) std::cout << "t1 is hotter\n";
    else if (t1 == t2) std::cout << "Temperatures are equal\n";
    else std::cout << "Comparison is unordered (NaN detected)\n";
}
