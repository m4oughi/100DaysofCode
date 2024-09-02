#include <iostream>
#include <thread>

struct Data {
    int id;
    const char* message;
};

void processData(Data* data) {
    std::cout << "ID: " << data->id << ", Message: " << data->message << std::endl;
}

int main() {
    Data data = {1, "Processing data..."};
    
    std::thread t(processData, &data);  // Pass a pointer to a struct to the thread function

    t.join();  // Wait for the thread to complete
    return 0;
}
