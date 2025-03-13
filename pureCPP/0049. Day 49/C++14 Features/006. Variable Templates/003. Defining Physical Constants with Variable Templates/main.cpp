#include <iostream>

template<typename T>
constexpr T speed_of_light = T(299792458); // meters per second

template<typename T>
constexpr T gravitational_constant = T(6.67430e-11); // m^3⋅kg⁻¹⋅s⁻²

int main() {
    std::cout << "Speed of Light (float): " << speed_of_light<float> << " m/s\n";
    std::cout << "Gravitational Constant (double): " << gravitational_constant<double> << " m^3⋅kg⁻¹⋅s⁻²\n";

    return 0;
}
