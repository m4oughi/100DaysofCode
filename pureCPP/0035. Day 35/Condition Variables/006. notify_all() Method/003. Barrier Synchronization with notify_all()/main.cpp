#include <iostream>
#include <thread>
#include <condition_variable>
#include <vector>

std::condition_variable cv;
std::mutex mtx;
int counter = 0;
const int required = 3;

void task(int id) {
    std::unique_lock<std::mutex> lock(mtx);
    counter++;
    if (counter < required) {
        cv.wait(lock, [] { return counter == required; });
    } else {
        cv.notify_all();  // Notify all threads once the required number has reached the barrier
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
