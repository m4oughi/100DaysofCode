#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> m = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    auto lower = m.lower_bound(2);
    auto upper = m.upper_bound(2);

    std::cout << "Lower bound: " << lower->first << " -> " << lower->second << "\n";

    if (upper != m.end()) {
        std::cout << "Upper bound: " << upper->first << " -> " << upper->second << "\n";
    } else {
        std::cout << "No upper bound found.\n";
    }

    return 0;
}
