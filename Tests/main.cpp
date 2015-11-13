//
//  main.cpp
//  Tests
//
//  Created by Jordie Shier  on 2015-11-12.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include <iostream>
#include <gtest/gtest.h>

// Set up Google Test and run all tests in the Tests directory
GTEST_API_ int main(int argc, char **argv) {
    printf("Running Tests for Exercise Software\n");
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
