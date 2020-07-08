//
//  Manager.cpp
//  CPPPrimer
//
//  Created by Sanjay Patil on 7/4/20.
//  Copyright © 2020 Sanjay Patil. All rights reserved.
//

#include "Manager.hpp"

Manager::Manager() : salaried(true) {}
Manager::Manager(string name, int pay, bool s) : Employee(name, pay) {
    salaried = s;
}

double Manager::getPay() {
    if (salaried) {
        return 40*pay;
    }
    return pay;
}
