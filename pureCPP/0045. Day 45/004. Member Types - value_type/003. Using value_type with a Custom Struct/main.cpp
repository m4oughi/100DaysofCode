#include <iostream>
#include <queue>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::queue<Person> q;

    // Using value_type to declare a variable
    std::queue<Person>::value_type p1 = {"John", 25};
    q.push(p1);

    std::cout << "Front Person: " << q.front().name << " (" << q.front().age << " years old)" << std::endl;

    return 0;
}
