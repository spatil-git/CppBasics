//
//  ExceptionHandling.hpp
//  CPPPrimer
//
//  Created by Sanjay Patil on 7/5/20.
//  Copyright © 2020 Sanjay Patil. All rights reserved.
//

#ifndef ExceptionHandling_hpp
#define ExceptionHandling_hpp

#include <stdio.h>
#include <stdexcept>
using namespace std;

/*
 Public inheritance allows the public method access else only private methods.
 */
class DivideByZeroError:public runtime_error {
public:
    DivideByZeroError():runtime_error("Divide by zero exception"){};
};

class ExceptionHandling {
public:
    double divide(int num, int denom);
};

#endif /* ExceptionHandling_hpp */
