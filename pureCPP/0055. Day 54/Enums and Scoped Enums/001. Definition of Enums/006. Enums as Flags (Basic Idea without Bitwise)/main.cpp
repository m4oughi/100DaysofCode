#include <iostream>

enum Features { FeatureA = 1, FeatureB = 2, FeatureC = 3 };

int main() {
    Features current = FeatureB;
    if (current == FeatureB) {
        std::cout << "Feature B is enabled.\n";
    }
}
