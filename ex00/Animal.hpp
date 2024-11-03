#pragma once

#include <string>
#include <iostream>

class Animal {
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const std::string& type);
        // ~Animal();
        virtual ~Animal();
        virtual void makeSound();
        const std::string getType();

};
