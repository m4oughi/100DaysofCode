#include <iostream>

enum class AccessLevel {
    Admin,
    User,
    Guest
};

template <AccessLevel A>
void accessContent() {
    if constexpr (A == AccessLevel::Admin) {
        std::cout << "Admin access granted\n";
    } else if constexpr (A == AccessLevel::User) {
        std::cout << "User access granted\n";
    } else {
        std::cout << "Guest access granted\n";
    }
}

int main() {
    accessContent<AccessLevel::Admin>();  // Output: Admin access granted
    accessContent<AccessLevel::User>();   // Output: User access granted
    accessContent<AccessLevel::Guest>();  // Output: Guest access granted
    return 0;
}
