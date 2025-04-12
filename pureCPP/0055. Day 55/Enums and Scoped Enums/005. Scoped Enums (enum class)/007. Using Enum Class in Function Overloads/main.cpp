#include <iostream>

enum class Permission { Read, Write };
enum class Action { Read, Write };

void perform(Permission p) {
    std::cout << "Permission function called\n";
}

void perform(Action a) {
    std::cout << "Action function called\n";
}

int main() {
    perform(Permission::Write);  // Calls correct overload due to scoped types
}
