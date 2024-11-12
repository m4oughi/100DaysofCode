#include <iostream>
#include <mutex>
#include <thread>

class Account {
    int balance;
    std::string owner;
    std::mutex balance_mtx, owner_mtx;

public:
    Account(int bal, std::string name) : balance(bal), owner(name) {}

    void deposit(int amount) {
        std::lock_guard<std::mutex> lock(balance_mtx);
        balance += amount;
    }

    void changeOwner(const std::string& newOwner) {
        std::lock_guard<std::mutex> lock(owner_mtx);
        owner = newOwner;
    }

    void display() {
        std::lock_guard<std::mutex> lock1(balance_mtx);
        std::lock_guard<std::mutex> lock2(owner_mtx);
        std::cout << "Account of " << owner << " has balance: " << balance << "\n";
    }
};

int main() {
    Account account(1000, "Alice");
    std::thread t1(&Account::deposit, &account, 200);
    std::thread t2(&Account::changeOwner, &account, "Bob");

    t1.join();
    t2.join();

    account.display();
    return 0;
}
