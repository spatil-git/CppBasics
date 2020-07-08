//
//  Employee.hpp
//  CPPPrimer
//
//  Created by Sanjay Patil on 7/2/20.
//  Copyright © 2020 Sanjay Patil. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <strstream>

using namespace std;

class Employee {
protected:
    string name;
    double pay;
public:
    Employee();
    Employee(string name, double pay);
    string getName() {return name;};
    virtual double getPay();
    string toString() {
        strstream stm;
        stm << name << " : " << pay << '\0';
        return stm.str();
    };
};

#endif /* Employee_hpp */
