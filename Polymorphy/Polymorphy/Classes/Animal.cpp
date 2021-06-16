//
//  Animal.cpp
//  Polymorphy
//
//  Created by Kris Myslowski on 16.06.21.
//

#include "Animal.hpp"

void Animal::makeNoise()
{
    std::cout << "*ANIMAL NOISE*" << std::endl;
}

void Animal::setName(std::string name)
{
    m_name = name;
}

void Animal::getName()
{
    std::cout <<  m_name <<std::endl;
}
