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



// Ueberschreiben Beispiel - Getraenkebeispiel aus der Folie
class Getraenk
{
public:
    virtual std::string schmeckt();
};

std::string Getraenk::schmeckt()
{
    return "schmeckt";
}

class Bier: public Getraenk
{
public:
    std::string schmeckt() override;
};

std::string Bier::schmeckt()
{
    return "schmeckt mir am besten";
};



// declare func for overloading example
void greeting();
void greeting(std::string);

void trenner();


int main(int argc, const char * argv[])
{
    // overloading
    greeting();
    greeting("Guenter");
    
    trenner();
    
    // overriding
    Getraenk * pGetraenk = new Getraenk;
    std::cout << pGetraenk->schmeckt() << std::endl;
    
    pGetraenk = new Bier;
    pGetraenk->schmeckt();
    
    Bier * pBier = new Bier;
    std::cout << pBier->schmeckt() << std::endl;
    std::cout << pBier->Getraenk::schmeckt() << std::endl;
    
    trenner();
    
    Pet * pPet = new Pet();
    pPet->makeNoise();
    
    pPet = new Cat();
    pPet->makeNoise();

    pPet = new Dog();
    pPet->makeNoise();
    
    pPet = new Rodent();
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

void trenner()
{
    std::cout << "----------------" << std::endl;
}
