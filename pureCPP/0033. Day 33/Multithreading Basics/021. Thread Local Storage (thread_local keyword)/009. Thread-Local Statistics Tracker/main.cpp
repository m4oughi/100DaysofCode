#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

class StatsTracker {
public:
    StatsTracker() : count(0), sum(0) {}
    void addValue(int value) {
        ++count;
        sum += value;
    }
    int getCount() const { return count; }
    double getAverage() const { return count ? static_cast<double>(sum) / count : 0; }

private:
    int count;
    int sum;
};

thread_local StatsTracker tracker;
std::mutex mtx;

void processData(const std::vector<int>& data) {
    for (int value : data) {
        tracker.addValue(value);
    }
    std::lock_guard<std::mutex> lock(mtx);  // Synchronize access to the console
    std::cout << "Thread " << std::this_thread::get_id() << " - Average: " << tracker.getAverage() << std::endl;
}

int main() {
    std::vector<int> data1 = {1, 2, 3, 4, 5};
    std::vector<int> data2 = {10, 20, 30, 40, 50};
    std::vector<int> data3 = {100, 200, 300, 400, 500};

    std::thread t1(processData, data1);
    std::thread t2(processData, data2);
    std::thread t3(processData, data3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
