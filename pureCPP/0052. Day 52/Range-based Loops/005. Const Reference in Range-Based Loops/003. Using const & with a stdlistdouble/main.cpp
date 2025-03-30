#include <iostream>
#include <list>

int main() {
    std::list<double> values = {3.14, 2.71, 1.61};

    for (const double& val : values) { // Read-only iteration
        std::cout << val << " ";
    }

    return 0;
}
