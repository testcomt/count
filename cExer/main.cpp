//
//  main.cpp
//  cExer
//
//  Created by 邰 晓梅 on 16-2-25.
//  Copyright (c) 2016年 邰 晓梅. All rights reserved.
//
#include <iostream>
using namespace std;
#include "salesOutput.h"

int main()
{
    int count = read();
    
    if (count>1) {
        sort();
        compact();

    }
    
    if (count==0) {
        cout<<"No sales record for this month!"<<endl;
        countOfSales = count;
    }else{
        output();
    }
    
    return 0;
}
