#include <iostream>
#include <thread>
#include <vector>
#include <chrono>

void worker(std::stop_token st, int id, int workTime) {
    int counter = 0;
    while (!st.stop_requested() && counter < workTime) {
        std::cout << "Worker " << id << " processing...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        counter++;
    }
    std::cout << "Worker " << id << " done!\n";
}

int main() {
    std::jthread t1(worker, std::stop_token{}, 1, 5);
    std::jthread t2(worker, std::stop_token{}, 2, 3);

    std::this_thread::sleep_for(std::chrono::seconds(2));
    t1.request_stop();
    t2.request_stop();
}
