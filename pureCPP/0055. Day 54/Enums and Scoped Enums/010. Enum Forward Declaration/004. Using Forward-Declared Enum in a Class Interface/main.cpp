#include <iostream>

enum class Role : short;  // Forward declared

class User {
public:
    User(Role r);
    void printRole();
private:
    Role role;
};

enum class Role : short { Admin = 1, Guest = 2 };

User::User(Role r) : role(r) {}

void User::printRole() {
    std::cout << "User Role: " << static_cast<int>(role) << std::endl;
}

int main() {
    User u(Role::Admin);
    u.printRole();
}
