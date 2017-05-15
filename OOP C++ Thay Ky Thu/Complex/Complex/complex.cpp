//
//  complex.cpp
//  Complex
//
//  Created by Son on 06/03/2017.
//  Copyright © 2017 io.sonH. All rights reserved.

#include <iostream>
using namespace std;

class complex{
public:
    int Re, Im;
public:
    complex(int a, int b){
        Re = a;
        Im = b;
    }
    void Display(){
        if(Im < 0){
            cout<<Re<<Im<<"i";
        }else{
            cout<<Re<<" + "<<Im<<"i";
        }
    }
};

