//
//  test_bike_prototype.cpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-12.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include "test_bike_prototype.hpp"

// Test the constructor for BikePrototype
TEST(BikePrototypeTest, Constructor) {
    BikePrototype bike;
    ASSERT_TRUE(bike.getType() == "Bike");
}
