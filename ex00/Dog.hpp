#ifndef DOG_HFF
#define DOG_HFF

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        ~Dog();
        void makeSound() const;
};

#endif