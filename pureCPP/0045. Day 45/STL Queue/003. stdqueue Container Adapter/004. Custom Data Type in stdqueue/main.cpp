#include <iostream>
#include <queue>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::queue<Person> q;

    q.push({"Alice", 25});
    q.push({"Bob", 30});
    
    std::cout << "Front Person: " << q.front().name << " (" << q.front().age << " years)" << std::endl;

    return 0;
}
