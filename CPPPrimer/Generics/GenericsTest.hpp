//
//  GenericsTest.hpp
//  CPPPrimer
//
//  Created by Sanjay Patil on 7/4/20.
//  Copyright © 2020 Sanjay Patil. All rights reserved.
//

#ifndef GenericsTest_hpp
#define GenericsTest_hpp

#include <stdio.h>
#include <iostream>

class GenericsTest {
public:
    /*
     Generic functions need to reside in the header file or in cpp entirely.
     */
    template <typename T>
    void display(T arr[], int size) {
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << "\n";
        }
    }
};
#endif /* GenericsTest_hpp */
