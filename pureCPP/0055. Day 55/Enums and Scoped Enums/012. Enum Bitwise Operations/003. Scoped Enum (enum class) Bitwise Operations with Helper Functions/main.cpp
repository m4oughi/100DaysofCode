#include <iostream>

enum class Feature : uint8_t {
    None    = 0,
    A       = 1 << 0,
    B       = 1 << 1,
    C       = 1 << 2
};

inline Feature operator|(Feature a, Feature b) {
    return static_cast<Feature>(
        static_cast<uint8_t>(a) | static_cast<uint8_t>(b)
    );
}

inline bool hasFeature(Feature val, Feature flag) {
    return static_cast<uint8_t>(val) & static_cast<uint8_t>(flag);
}

int main() {
    Feature f = Feature::A | Feature::C;
    if (hasFeature(f, Feature::C)) {
        std::cout << "Feature C is enabled.\n";
    }
}
