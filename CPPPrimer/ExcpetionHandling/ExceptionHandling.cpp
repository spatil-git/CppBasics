//
//  ExceptionHandling.cpp
//  CPPPrimer
//
//  Created by Sanjay Patil on 7/5/20.
//  Copyright © 2020 Sanjay Patil. All rights reserved.
//

#include "ExceptionHandling.hpp"

double ExceptionHandling::divide(int num, int denom) {
    if (denom == 0) {
        throw DivideByZeroError();
    }
    return num/denom;
}
