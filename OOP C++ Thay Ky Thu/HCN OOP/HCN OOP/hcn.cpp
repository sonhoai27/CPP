//
//  hcn.cpp
//  HCN OOP
//
//  Created by Son on 06/03/2017.
//  Copyright © 2017 io.sonH. All rights reserved.
//

#include <iostream>

using namespace std;

class hcn
{
    float cd, cr;
public:
    hcn(float a, float b){
        cd = a; cr = b;
    }
    float tinhDienTich(){
        return cd*cr;
    }
    float tinhChuVi(){
        return (cd + cr)*2;
    }
};
