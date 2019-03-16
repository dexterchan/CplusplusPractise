//
//  main.cpp
//  HelloWorld
//
//  Created by Dexter on 7/4/2018.
//  Copyright © 2018 Dexter. All rights reserved.
//
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!!\n";
    
    if (argc < 2)
    {
        fprintf(stdout,"Usage: %s number\n",argv[0]);
        return 1;
    }
    double inputValue = atof(argv[1]);
    double outputValue = sqrt(inputValue);
    fprintf(stdout,"The square root of %g is %g\n",inputValue, outputValue);
    
    
    //using namespace boost::lambda;
    //typedef std::istream_iterator<int> in;
    std::shared_ptr< std::vector<int> > vInput(new std::vector<int>());
    //std::vector<int> vInput;
    vInput->push_back(50);
    vInput->push_back(60);
    vInput->push_back(80);
    std::for_each(
                  vInput->begin(),vInput->end(), std::cout << (boost::lambda::_1 * 3) << " " );
    std::cout<<std::endl;
    return 0;
}
