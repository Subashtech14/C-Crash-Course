#include <iostream>
#include <string>

// Base class
class Animal {
public:
    Animal(const std::string& name) : name(name) {}

    void eat() {
        std::cout << name << " is eating." << std::endl;
    }

    void sleep() {
        std::cout << name << " is sleeping." << std::endl;
    }

private:
    std::string name;
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    Dog(const std::string& name, const std::string& breed) : Animal(name), breed(breed) {}

    void bark() {
        std::cout << "Woof! Woof!" << std::endl;
    }

private:
    std::string breed;
};

int main() {
    // Creating an instance of the derived class
    Dog myDog("Buddy", "Labrador");

    // Accessing base class methods
    myDog.eat();
    myDog.sleep();

    // Accessing derived class method
    myDog.bark();

    return 0;
}
