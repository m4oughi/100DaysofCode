#include <iostream>
#include <future>
#include <thread>

struct ComplexData {
    int id;
    std::string message;
};

void generateData(std::promise<ComplexData>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    ComplexData data{1, "Hello from worker thread"};
    prom.set_value(data);  // Share complex data
}

int main() {
    std::promise<ComplexData> prom;  // Promise for complex data
    std::future<ComplexData> fut = prom.get_future();  // Get future for complex data

    // Launch the worker thread
    std::thread t(generateData, std::ref(prom));

    // Wait and get the result
    ComplexData result = fut.get();
    std::cout << "Received data: " << result.id << ", " << result.message << std::endl;

    t.join();
    return 0;
}
