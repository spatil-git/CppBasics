//
//  Employee.cpp
//  CPPPrimer
//
//  Created by Sanjay Patil on 7/2/20.
//  Copyright © 2020 Sanjay Patil. All rights reserved.
//

#include "Employee.hpp"

Employee::Employee() {
    name = "";
    pay = 0;
}
Employee::Employee(string name, double pay) {
    this->name = name;
    this->pay = pay;
}
double Employee::getPay() {return pay;};
