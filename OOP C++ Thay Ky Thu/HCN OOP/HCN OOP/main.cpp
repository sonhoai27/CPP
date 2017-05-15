//
//  main.cpp
//  HCN OOP
//
//  Created by Son on 06/03/2017.
//  Copyright © 2017 io.sonH. All rights reserved.
//

#include <iostream>
#include "hcn.cpp"

using namespace std;

int main() {
    // insert code here...
    float a;
    cout<<"\nNhap vao canh a: "; cin>>a;
    hcn hv(a, 3);
    
    cout<<"\n\nTinh chu vi: "<<hv.tinhChuVi();
    cout<<"\n\nTinh dien tich "<<hv.tinhDienTich();
    cout<<endl;
    return 0;
}
