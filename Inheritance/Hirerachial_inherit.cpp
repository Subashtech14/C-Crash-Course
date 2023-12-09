#include <iostream>
#include <string>

// Base class
class Animal {
public:
   
    void eat() const {
        std::cout << name << " is eating." << std::endl;
    }

    void sleep() const {
        std::cout << name << " is sleeping." << std::endl;
    }

    void makeSound() const {
        std::cout << name << " makes a generic sound." << std::endl;
    }

private:
    std::string name;
};

// Derived class 1
class Mammal : public Animal {
public:
    void giveBirth() const {
        std::cout << "Mammal gives birth." << std::endl;
    }
};

// Derived class 2
class Bird : public Animal {
public:
    void layEggs() const {
        std::cout << "Bird lays eggs." << std::endl;
    }
};

// Further derived class 1
class Dog : public Mammal {
public:
    void bark() const {
        std::cout << "Dog barks." << std::endl;
    }
};

// Further derived class 2
class Sparrow : public Bird {
public:
    void chirp() const {
        std::cout << "Sparrow chirps." << std::endl;
    }
};

int main() {

    Dog myDog;
    Sparrow mySparrow;


    myDog.makeSound();   // Inherited from Animal
    myDog.giveBirth();   // Inherited from Mammal
    myDog.bark();        // Specific to Dog

    std::cout << std::endl;

    mySparrow.makeSound();  // Inherited from Animal
    mySparrow.layEggs();    // Inherited from Bird
    mySparrow.chirp();      // Specific to Sparrow

    return 0;
}
