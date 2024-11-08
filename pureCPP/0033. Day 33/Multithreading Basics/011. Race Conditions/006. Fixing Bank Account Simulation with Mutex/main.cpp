#include <iostream>
#include <thread>
#include <mutex>

int balance = 0;
std::mutex mtx;

void deposit(int amount) {
    std::lock_guard<std::mutex> lock(mtx);
    balance += amount;
}

void withdraw(int amount) {
    std::lock_guard<std::mutex> lock(mtx);
    if (balance >= amount) {
        balance -= amount;
    }
}

int main() {
    std::thread t1(deposit, 100);
    std::thread t2(withdraw, 50);

    t1.join();
    t2.join();

    std::cout << "Final balance: " << balance << std::endl;
    return 0;
}
