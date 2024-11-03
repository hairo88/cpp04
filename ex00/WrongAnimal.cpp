#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type) {
    std::cout << "WrongAnimal constructor called with type" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

const std::string WrongAnimal::getType() const {
    return _type;
}

void WrongAnimal::makeSound() {
    std::cout << "Generic wrong animal sound" << std::endl;
}