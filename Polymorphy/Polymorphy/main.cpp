//
//  main.cpp
//  Polymorphy
//
//  Created by Kris Myslowski on 16.06.21.
//

#include <iostream>

// declare
void greeting();
void greeting(std::string);

int main(int argc, const char * argv[])
{
    // overloading
    greeting();
    greeting("Guenter");
    
    // overriding
    
    
    
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
