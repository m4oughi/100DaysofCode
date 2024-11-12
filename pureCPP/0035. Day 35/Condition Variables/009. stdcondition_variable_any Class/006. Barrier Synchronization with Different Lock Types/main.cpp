#include <iostream>
#include <thread>
#include <condition_variable>
#include <vector>
#include <shared_mutex>

std::condition_variable_any cv_any;
std::shared_mutex shared_mtx;
int counter = 0;
const int required = 3;

void task(int id) {
    std::shared_lock<std::shared_mutex> lock(shared_mtx);
    counter++;
    if (counter < required) {
        cv_any.wait(lock, [] { return counter == required; });  // Wait until all threads reach barrier
    } else {
        cv_any.notify_all();  // Notify all threads once barrier is reached
    }
    std::cout << "Task " << id << " proceeding after barrier.\n";
}

int main() {
    std::vector<std::thread> tasks;
    for (int i = 1; i <= required; ++i) {
        tasks.emplace_back(task, i);
    }

    for (auto& t : tasks) {
        t.join();
    }
    return 0;
}
