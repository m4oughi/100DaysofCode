#include <iostream>
#include <thread>

int balance = 0;

void deposit(int amount) {
    balance += amount;  // Race condition
}

void withdraw(int amount) {
    if (balance >= amount) {
        balance -= amount;  // Race condition
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
