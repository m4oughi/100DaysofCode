#include <iostream>

enum class Feature : int {
    None = 0,
    FeatureA = 1 << 0, // 0001
    FeatureB = 1 << 1, // 0010
    FeatureC = 1 << 2, // 0100
    All = FeatureA | FeatureB | FeatureC
};

int main() {
    Feature activeFeatures = Feature::FeatureA | Feature::FeatureC;

    // Check if FeatureA is enabled
    if (static_cast<int>(activeFeatures) & static_cast<int>(Feature::FeatureA)) {
        std::cout << "Feature A is enabled.\n";
    }

    // Check if FeatureB is enabled
    if (!(static_cast<int>(activeFeatures) & static_cast<int>(Feature::FeatureB))) {
        std::cout << "Feature B is NOT enabled.\n";
    }

    return 0;
}
