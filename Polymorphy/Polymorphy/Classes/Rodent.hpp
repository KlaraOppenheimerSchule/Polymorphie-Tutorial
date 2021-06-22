//
//  Rodent.hpp
//  Polymorphy
//
//  Created by Kris Myslowski on 21.06.21.
//

#ifndef Rodent_hpp
#define Rodent_hpp

#include <stdio.h>
#include <iostream>
#include "Pet.hpp"

class Rodent: public Pet
{
public:
    void makeNoise() override;

};

#endif /* Rodent_hpp */
