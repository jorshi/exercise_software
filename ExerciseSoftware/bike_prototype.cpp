//
//  bike_prototype.cpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include "bike_prototype.hpp"

BikePrototype::BikePrototype(const BikePrototype&)
{
    
}

EquipmentPrototype* BikePrototype::clone() const
{
    return new BikePrototype(*this);
}