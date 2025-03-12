#include <iostream>
#include <complex>

std::complex<double> operator"" _i(long double imag) {
    return {0.0, static_cast<double>(imag)};
}

int main() {
    std::complex<double> z = 5.0_i;
    std::cout << "Imaginary number: " << z << '\n';
    return 0;
}
