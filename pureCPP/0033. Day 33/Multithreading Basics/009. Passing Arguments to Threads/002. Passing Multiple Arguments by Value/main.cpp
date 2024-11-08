#include <iostream>
#include <thread>

void displayInfo(int id, const std::string& name) {
    std::cout << "ID: " << id << ", Name: " << name << std::endl;
}

int main() {
    std::thread t(displayInfo, 1, "Alice");
    t.join();
    return 0;
}
