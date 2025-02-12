#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students = {
        {101, "Alice"}, {105, "Bob"}, {110, "Charlie"}, {115, "David"}
    };

    // Find first element >= 105
    auto lb = students.lower_bound(105);
    std::cout << "Lower Bound (>=105): " << lb->first << " -> " << lb->second << "\n";

    // Find first element > 105
    auto ub = students.upper_bound(105);
    std::cout << "Upper Bound (>105): " << ub->first << " -> " << ub->second << "\n";

    return 0;
}
