#include <iostream>
#include <list>

int main() {
    std::list<double> values = {2.5, 3.5, 4.5};

    for (double& val : values) {
        val += 1.0;
    }

    for (const double& val : values) {
        std::cout << val << " ";
    }

    return 0;
}
