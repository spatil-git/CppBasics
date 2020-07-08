//
//  Cat.hpp
//  CPPPrimer
//
//  Created by Sanjay Patil on 7/4/20.
//  Copyright © 2020 Sanjay Patil. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>
#include <iostream>
#include "Animal.hpp"

using namespace std;

class Cat: public Animal {
public:
    virtual void talk() {
        cout << "Meow!" << "\n";
    }
};
#endif /* Cat_hpp */
