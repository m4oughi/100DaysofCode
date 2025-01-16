#include <iostream>
#include <queue>
#include <string>

struct Person {
    std::string name;
    int age;

    bool operator<(const Person &other) const {
        return age < other.age; // Older person has higher priority
    }
};

int main() {
    std::priority_queue<Person> pq;
    pq.push({"Alice", 25});
    pq.push({"Bob", 30});
    pq.push({"Charlie", 20});

    while (!pq.empty()) {
        std::cout << pq.top().name << " (Age: " << pq.top().age << ")\n";
        pq.pop();
    }
    return 0;
}
