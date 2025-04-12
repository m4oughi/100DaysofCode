#include <iostream>

class Manager {
public:
    enum class Status : int;  // Forward declaration
    void setStatus(Status s);
private:
    Status status;
};

// Full definition after class
enum class Manager::Status : int { Ready, Busy };

void Manager::setStatus(Status s) {
    status = s;
    std::cout << "Status updated.\n";
}

int main() {
    Manager m;
    m.setStatus(Manager::Status::Ready);
}
