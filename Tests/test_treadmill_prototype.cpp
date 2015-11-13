//
//  test_treadmill_prototype.cpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-12.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include "test_treadmill_prototype.hpp"

TEST(TreadmillPrototypeTest, Constructor) {
    TreadmillPrototype treadmill;
    ASSERT_TRUE(treadmill.getType() == "Treadmill");
}