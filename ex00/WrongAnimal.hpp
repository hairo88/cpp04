#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string _type;
    private:
        WrongAnimal();
        WrongAnimal(const std::string& type);
        ~WrongAnimal();
        void makeSound();
        const std::string getType() const;

};

#endif