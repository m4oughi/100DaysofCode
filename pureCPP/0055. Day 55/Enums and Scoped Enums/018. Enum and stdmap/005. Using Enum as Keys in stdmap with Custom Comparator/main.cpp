#include <iostream>
#include <map>

enum class Priority {
    Low,
    Medium,
    High
};

// Custom comparator for enum
struct PriorityComparator {
    bool operator()(Priority lhs, Priority rhs) const {
        return static_cast<int>(lhs) < static_cast<int>(rhs);
    }
};

int main() {
    std::map<Priority, std::string, PriorityComparator> priorityMap;

    priorityMap[Priority::Low] = "Low priority task";
    priorityMap[Priority::Medium] = "Medium priority task";
    priorityMap[Priority::High] = "High priority task";

    // Displaying the mapped values in sorted order
    for (const auto& [priority, task] : priorityMap) {
        std::cout << "Priority: " << static_cast<int>(priority) << ", Task: " << task << "\n";
    }

    return 0;
}
