#include <iostream>
#include <thread>

class Task {
public:
    void run(int id) {
        std::cout << "Running task with ID: " << id << std::endl;
    }
};

int main() {
    Task task;
    std::thread t(&Task::run, &task, 100); // Passing member function to thread
    t.join();
    
    return 0;
}
