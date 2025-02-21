#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> trafficQueue;

    trafficQueue.push("Car 1");
    trafficQueue.push("Car 2");
    trafficQueue.push("Truck 1");

    while (!trafficQueue.empty()) {
        std::cout << "Vehicle passing: " << trafficQueue.front() << std::endl;
        trafficQueue.pop();
    }

    return 0;
}
