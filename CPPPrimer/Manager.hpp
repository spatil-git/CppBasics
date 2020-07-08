//
//  Manager.hpp
//  CPPPrimer
//
//  Created by Sanjay Patil on 7/4/20.
//  Copyright © 2020 Sanjay Patil. All rights reserved.
//

#ifndef Manager_hpp
#define Manager_hpp

#include <stdio.h>
#include "Employee.hpp"
using namespace std;

class Manager:public Employee {
private:
    bool salaried;
public:
    Manager();
    Manager(string name, int pay, bool s);
    virtual double getPay();
};
#endif /* Manager_hpp */
