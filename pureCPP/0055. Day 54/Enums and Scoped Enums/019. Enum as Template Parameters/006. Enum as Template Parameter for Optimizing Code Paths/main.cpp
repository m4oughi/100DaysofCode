#include <iostream>

enum class OptimizationLevel {
    Low,
    Medium,
    High
};

template <OptimizationLevel Level>
void optimize() {
    if constexpr (Level == OptimizationLevel::Low) {
        std::cout << "Low optimization: Basic processing\n";
    } else if constexpr (Level == OptimizationLevel::Medium) {
        std::cout << "Medium optimization: Some improvements\n";
    } else if constexpr (Level == OptimizationLevel::High) {
        std::cout << "High optimization: Advanced processing\n";
    }
}

int main() {
    optimize<OptimizationLevel::Low>();    // Output: Low optimization: Basic processing
    optimize<OptimizationLevel::Medium>(); // Output: Medium optimization: Some improvements
    optimize<OptimizationLevel::High>();   // Output: High optimization: Advanced processing
    return 0;
}
