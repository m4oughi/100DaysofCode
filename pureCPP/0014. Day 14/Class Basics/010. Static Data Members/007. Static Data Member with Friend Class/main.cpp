#include <iostream>
using namespace std;

class Bank {
private:
    static int totalMoney;

public:
    static void depositMoney(int amount) {
        totalMoney += amount;
    }

    static int getTotalMoney() {
        return totalMoney;
    }

    friend class Auditor;
};

int Bank::totalMoney = 0;

class Auditor {
public:
    void audit() {
        cout << "Auditing: Total money in bank: " << Bank::getTotalMoney() << endl;
    }
};

int main() {
    Bank::depositMoney(1000);
    Bank::depositMoney(500);

    Auditor auditor;
    auditor.audit();
    
    return 0;
}
