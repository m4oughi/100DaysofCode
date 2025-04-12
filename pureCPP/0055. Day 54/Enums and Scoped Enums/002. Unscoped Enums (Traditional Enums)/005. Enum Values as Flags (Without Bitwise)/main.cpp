#include <iostream>

enum Feature { FeatureNone = 0, FeatureA = 1, FeatureB = 2, FeatureC = 4 };

int main() {
    int enabledFeatures = FeatureA | FeatureC;

    if (enabledFeatures & FeatureC)
        std::cout << "Feature C is enabled!\n";
}
