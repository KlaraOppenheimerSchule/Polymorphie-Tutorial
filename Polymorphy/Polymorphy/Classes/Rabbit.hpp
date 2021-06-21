//
//  Rabbit.hpp
//  Polymorphy
//
//  Created by Kris Myslowski on 21.06.21.
//

#ifndef Rabbit_hpp
#define Rabbit_hpp

#include <stdio.h>
#include <iostream>
#include "Rodent.hpp"

class Rabbit: public Pet
{
public:
    void makeNoise();
};

#endif /* Rabbit_hpp */
