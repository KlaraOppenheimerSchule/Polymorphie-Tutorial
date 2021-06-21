//
//  Cat.hpp
//  Polymorphy
//
//  Created by Kris Myslowski on 21.06.21.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>
#include <iostream>
#include "Pet.hpp"


class Cat :public Pet
{
public:
    void makeNoise() override;
};

#endif /* Cat_hpp */
