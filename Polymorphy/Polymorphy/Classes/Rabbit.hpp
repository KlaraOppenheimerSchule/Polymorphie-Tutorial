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

class Rabbit: public Rodent
{
public:
    void makeNoise() override;
};

#endif /* Rabbit_hpp */
