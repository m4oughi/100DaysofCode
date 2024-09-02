#include <iostream>
#include <memory>
#include <vector>

class Observer {
public:
    virtual void update() = 0;
};

class Subject {
private:
    std::vector<std::weak_ptr<Observer>> observers;  // Use weak_ptr to avoid memory leaks

public:
    void addObserver(std::shared_ptr<Observer> observer) {
        observers.push_back(observer);
    }

    void notifyObservers() {
        for (auto it = observers.begin(); it != observers.end(); ) {
            if (auto obs = it->lock()) {  // Lock weak_ptr to get shared_ptr
                obs->update();
                ++it;
            } else {
                it = observers.erase(it);  // Remove expired weak_ptrs
            }
        }
    }
};

class ConcreteObserver : public Observer {
public:
    void update() override {
        std::cout << "Observer updated" << std::endl;
    }
};

int main() {
    auto subject = std::make_shared<Subject>();
    auto observer1 = std::make_shared<ConcreteObserver>();
    auto observer2 = std::make_shared<ConcreteObserver>();

    subject->addObserver(observer1);
    subject->addObserver(observer2);

    subject->notifyObservers();  // Output: Observer updated Observer updated

    observer1.reset();  // Manually delete observer1
    subject->notifyObservers();  // Output: Observer updated

    return 0;
}
