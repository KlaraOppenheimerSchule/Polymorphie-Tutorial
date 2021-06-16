//
//  Animal.hpp
//  Polymorphy
//
//  Created by Kris Myslowski on 16.06.21.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>
#include <iostream>

class Animal
{
public:
    Animal(){}
    ~Animal(){}
    
    virtual void makeNoise();
    virtual void setName(std::string name);
    virtual void getName();
    
private:
    std::string m_name;
    
};

#endif /* Animal_hpp */
