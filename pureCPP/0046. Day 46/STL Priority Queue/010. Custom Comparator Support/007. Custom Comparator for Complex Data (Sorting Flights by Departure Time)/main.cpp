#include <iostream>
#include <queue>
#include <vector>

struct Flight {
    std::string flightNumber;
    int departureTime; // In 24-hour format (e.g., 1330 for 1:30 PM)

    Flight(std::string num, int time) : flightNumber(num), departureTime(time) {}
};

struct FlightCompare {
    bool operator()(const Flight& a, const Flight& b) {
        return a.departureTime > b.departureTime; // Earliest flight first (Min-Heap)
    }
};

int main() {
    std::priority_queue<Flight, std::vector<Flight>, FlightCompare> pq;

    pq.push(Flight("AA101", 1430));
    pq.push(Flight("BA202", 900));
    pq.push(Flight("CC303", 1230));

    std::cout << "Flights sorted by earliest departure time:\n";
    while (!pq.empty()) {
        std::cout << "Flight: " << pq.top().flightNumber << ", Departure Time: " << pq.top().departureTime << "\n";
        pq.pop();
    }
    return 0;
}
