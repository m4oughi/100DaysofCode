#include <iostream>
#include <list>
#include <cmath>

bool comparePrecision(double a, double b) {
    return std::fabs(a - b) < 0.05 ? a < b : a < b;
}

int main() {
    std::list<double> list1 = {1.01, 2.02, 3.03};
    std::list<double> list2 = {1.05, 2.00, 3.04};

    list1.merge(list2, comparePrecision);

    std::cout << "Merged list with precision handling: ";
    for (double num : list1) std::cout << num << " ";

    return 0;
}
