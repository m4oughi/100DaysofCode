#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> ages = {18, 25, 30, 40};

    bool allInRange = std::all_of(ages.begin(), ages.end(), [](int age) {
        return age >= 18 && age <= 60;
    });

    std::cout << (allInRange ? "All ages are within the valid range." : "Some ages are out of range.") << std::endl;

    return 0;
}
