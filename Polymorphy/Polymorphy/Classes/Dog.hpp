//
//  Dog.hpp
//  Polymorphy
//
//  Created by Kris Myslowski on 21.06.21.
//

#ifndef Dog_hpp
#define Dog_hpp

#include <stdio.h>
#include <iostream>
#include "Pet.hpp"

class Dog: public Pet
{
public:
    void makeNoise();
};

#endif /* Dog_hpp */
