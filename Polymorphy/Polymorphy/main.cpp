//
//  main.cpp
//  Polymorphy
//
//  Created by Kris Myslowski on 16.06.21.
//

#include <iostream>
#include "Animal.hpp"

int main(int argc, const char * argv[])
{
    
    Animal * a = new Animal();
    
    a->setName("Animal");
    a->getName();
    a->makeNoise();
    
    
    return 0;
}
