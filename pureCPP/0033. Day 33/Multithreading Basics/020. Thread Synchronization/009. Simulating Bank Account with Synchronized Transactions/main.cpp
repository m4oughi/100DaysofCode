#include <iostream>
#include <thread>
#include <mutex>

class BankAccount {
public:
    BankAccount() : balance(0) {}

    void deposit(int amount) {
        std::lock_guard<std::mutex> lock(mtx);
        balance += amount;
        std::cout << "Deposited " << amount << ", Balance: " << balance << std::endl;
    }

    void withdraw(int amount) {
        std::lock_guard<std::mutex> lock(mtx);
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrew " << amount << ", Balance: " << balance << std::endl;
        } else {
            std::cout << "Insufficient funds. Balance: " << balance << std::endl;
        }
    }

private:
    int balance;
    std::mutex mtx;
};

int main() {
    BankAccount account;

    std::thread t1([&account]() { account.deposit(50); });
    std::thread t2([&account]() { account.withdraw(30); });
    std::thread t3([&account]() { account.withdraw(20); });

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
