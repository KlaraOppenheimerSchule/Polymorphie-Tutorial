//
//  Hamster.hpp
//  Polymorphy
//
//  Created by Kris Myslowski on 21.06.21.
//

#ifndef Hamster_hpp
#define Hamster_hpp

#include <stdio.h>
#include <iostream>
#include "Rodent.hpp"

class Hamster: public Rodent
{
public:
    void makeNoise() override;
};

#endif /* Hamster_hpp */
