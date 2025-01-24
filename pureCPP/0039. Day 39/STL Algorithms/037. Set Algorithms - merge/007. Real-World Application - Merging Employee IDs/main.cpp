#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> department1 = {101, 103, 105};
    std::vector<int> department2 = {102, 104, 106};
    std::vector<int> all_employees(department1.size() + department2.size());

    std::merge(department1.begin(), department1.end(), department2.begin(), department2.end(), all_employees.begin());

    std::cout << "Merged employee IDs: ";
    for (int id : all_employees) {
        std::cout << id << " ";
    }

    return 0;
}
