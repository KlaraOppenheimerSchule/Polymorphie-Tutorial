//
//  main.cpp
//  Polymorphy
//
//  Created by Kris Myslowski on 16.06.21.
//

#include <iostream>
#include "Pet.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Rodent.hpp"
#include "Hamster.hpp"
#include "Rabbit.hpp"


// declare
void greeting();
void greeting(std::string);

int main(int argc, const char * argv[])
{
    // overloading
    greeting();
    greeting("Guenter");
    
    // overriding
    
    // Substitutionsprinzip
    Pet * pPet = new Pet();
    pPet->makeNoise();
    
    pPet = new Cat();
    pPet->makeNoise();

    pPet = new Dog();
    pPet->makeNoise();
    
    pPet = new Rodent(); // TODO: add func to show object relation
    pPet->makeNoise();
    
    pPet = new Hamster();
    pPet->makeNoise();
    
    pPet = new Rabbit();
    pPet->makeNoise();
    
    return 0;
}


// define
void greeting()
{
    std::cout << "Hey there..." << std::endl;
}

void greeting(std::string _name)
{
    std::cout << "Hey " + _name << std::endl;
}
