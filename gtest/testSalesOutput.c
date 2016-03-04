//
//  testSalesOutput.c
//  cExer
//
//  Created by 邰 晓梅 on 16-3-4.
//  Copyright (c) 2016年 邰 晓梅. All rights reserved.
//

#include <gtest/gtest.h>
#include "salesOutput.h"


TEST(salesOutput, NoSalesOutput) {
    
    EXPECT_EQ(0, countOfSales);
}