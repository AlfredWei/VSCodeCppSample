//
//  main.cpp
//  CPlusTester
//
//  Created by Alfred, Shih-Yi, Wei on 2018/12/20.
//  Copyright © 2018 Alfred, Shih-Yi, Wei. All rights reserved.
//

#include <iostream>
#include "Solutions/perf.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    {
        perf::CTimeit t;
        std::cout << "Hello, World!\n";
    }
    
    return 0;
}
