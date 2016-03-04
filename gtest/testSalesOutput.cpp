#include <gtest/gtest.h>
#include "salesOutput.h"


TEST(salesOutput, NoSalesOutput) {
    
    EXPECT_EQ(0, countOfSales);
}