//
//  hv.cpp
//  HCN OOP
//
//  Created by Son on 06/03/2017.
//  Copyright © 2017 io.sonH. All rights reserved.
//

#include <iostream>
#include "hcn.cpp"

using namespace std;

class hinhvuong : public hcn
{
    public:
        hinhvuong(float a) : hcn(a, a){
        
    } //lớp con sẻ gọi phương thức khởi tạo của lớp hcn
};
