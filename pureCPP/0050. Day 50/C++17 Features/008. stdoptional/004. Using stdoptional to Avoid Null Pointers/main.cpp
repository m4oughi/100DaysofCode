#include <iostream>
#include <optional>

struct Person {
    std::string name;
    std::optional<std::string> nickname;
};

int main() {
    Person p1{"John", "Johnny"};
    Person p2{"Alice", std::nullopt};

    std::cout << p1.name << "'s nickname: " << p1.nickname.value_or("No nickname") << '\n';
    std::cout << p2.name << "'s nickname: " << p2.nickname.value_or("No nickname") << '\n';

    return 0;
}
