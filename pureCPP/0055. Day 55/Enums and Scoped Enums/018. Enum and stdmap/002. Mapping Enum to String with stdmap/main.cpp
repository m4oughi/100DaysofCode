#include <iostream>
#include <map>
#include <string>

enum class Status {
    Pending,
    InProgress,
    Completed
};

int main() {
    std::map<Status, std::string> statusMap;

    statusMap[Status::Pending] = "Task is pending";
    statusMap[Status::InProgress] = "Task is in progress";
    statusMap[Status::Completed] = "Task is completed";

    // Accessing the mapped string values
    std::cout << "Pending Status: " << statusMap[Status::Pending] << "\n";
    std::cout << "InProgress Status: " << statusMap[Status::InProgress] << "\n";
    std::cout << "Completed Status: " << statusMap[Status::Completed] << "\n";

    return 0;
}
