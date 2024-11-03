#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string& type) : _type(type) {
    std::cout << "Animal constructor called with type: " << _type << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return _type;
}

void Animal::makeSound() const {
    std::cout << "Generic animal sound" << std::endl;
}

