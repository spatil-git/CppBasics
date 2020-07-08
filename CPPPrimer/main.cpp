//
//  main.cpp
//  CPPPrimer
//
//  Created by Sanjay Patil on 7/2/20.
//  Copyright © 2020 Sanjay Patil. All rights reserved.
//

#include <iostream>
#include "Employee.hpp"
#include "Manager.hpp"
#include "Cat.hpp"
#include "GenericsTest.hpp"
#include "Stack.hpp"
#include "ExceptionHandling.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    Employee *e = new Employee("Sanjay", 100);
//    std::cout << e->getPay()<<"\n";
//    Manager m("Sanjay", 200, true);
//    e = &m;
//    std::cout << e->getPay()<<"\n";
//
//    // Abstrat class.
//    Cat c;
//    c.talk();
//    GenericsTest t;
//    int array[4] = {1,3,4,5};
//    t.display(array, 4);
//    string strArray[] = {"A", "AB"};
//    t.display(strArray, 2);
//    Stack<int> s;
//    s.push(10);
//    std::cout<<s.pop()<<"\n";
//
//    Stack<string> strStack;
//    strStack.push("Sanjay");
//    std::cout<<strStack.pop()<<"\n";
    ExceptionHandling e;
    try {
        double r = e.divide(5, 2);
        cout << "Result : " <<  r << endl;
    } catch (DivideByZeroError &e) {
        cout << e.what() << endl;
    }
    
    return 0;
}
