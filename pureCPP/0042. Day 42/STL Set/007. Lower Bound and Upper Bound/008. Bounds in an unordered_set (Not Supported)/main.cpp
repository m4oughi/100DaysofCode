#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset = {10, 20, 30, 40};

    // auto lb = uset.lower_bound(25);  // ❌ Error: Not available in unordered_set
    // auto ub = uset.upper_bound(25);  // ❌ Error: Not available in unordered_set

    return 0;
}
