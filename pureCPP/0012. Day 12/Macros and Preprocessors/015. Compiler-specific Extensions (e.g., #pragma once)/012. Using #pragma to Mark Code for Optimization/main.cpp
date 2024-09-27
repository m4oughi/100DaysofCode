#pragma optimize("g", on) // Enable global optimizations

int main() {
    int result = 1;
    for (int i = 1; i <= 10; ++i) {
        result *= i; // Optimized loop
    }
    return result;
}
