#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> employees = {
        {101, "John"},
        {102, "Emma"},
        {103, "David"}
    };

    int searchID = 102;
    if (employees.find(searchID) != employees.end()) {
        std::cout << "Employee " << searchID << " exists: " << employees[searchID] << "\n";
    } else {
        std::cout << "Employee " << searchID << " not found!\n";
    }

    return 0;
}
