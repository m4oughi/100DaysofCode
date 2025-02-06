#include <iostream>
#include <list>
#include <cmath>

bool nearlyEqual(double a, double b) {
    return std::fabs(a - b) < 0.01; // Consider numbers equal if they differ by less than 0.01
}

int main() {
    std::list<double> values = {1.01, 1.02, 2.00, 2.01, 3.05, 3.04, 4.00};

    values.unique(nearlyEqual);

    std::cout << "List after unique operation on floating-point numbers: ";
    for (double val : values) std::cout << val << " ";

    return 0;
}
