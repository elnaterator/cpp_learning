#include <iostream>

/*
* Animal is the base class
*/
class Animal {
    
protected:
    double weight;

public:

    Animal(double initialWeight = 0.0) : weight(initialWeight) {}

    double getWeight() const {
        return weight;
    }

    void eat(double amount) {
        weight += amount;
        std::cout << "Animal eats " << amount << " lbs" << std::endl;
    }

    void poop(double amount) {
        weight -= amount;
        std::cout << "Animal poops " << amount << " lbs" << std::endl;
    }

    void move(double distance = 1.0) {
        weight -= 0.01 * distance;
        std::cout << "Animal moves " << distance << " miles" << std::endl;
    }

};

/*
* Dog inherits weight and eat() and poop() from Animal
* Dog adds bark() and getBreed()
*/
class Dog : public Animal {

private:
    std::string breed;
    
public:
    Dog(const double initialWeight = 0.0, const std::string& initialBreed = "") 
        : Animal(initialWeight), breed(initialBreed) {}

    std::string getBreed() const {
        return breed;
    }

    // override move
    void move(double distance = 1.0) {
        weight -= 0.1 * distance;
        std::cout << "Dog runs " << distance << " miles" << std::endl;
    }

    // different sound based on breed
    void bark() {
        if (breed == "Chiuhuahua") {
            std::cout << "Yip!" << std::endl;
        } else if (breed == "Hound") {
            std::cout << "Howl!" << std::endl;
        } else {
            std::cout << "Bark!" << std::endl;
        }
    }
};
    
int main() {
    
    Dog dog(10.0, "Hound");
    dog.eat(2.0);
    dog.poop(1.0);
    dog.move();
    dog.bark();

    std::cout << "Dog weight: " << dog.getWeight() << std::endl;

    return 0;

}