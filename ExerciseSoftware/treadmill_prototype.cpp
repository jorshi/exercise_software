//
//  treadmill_prototype.cpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include "treadmill_prototype.hpp"


TreadmillPrototype::TreadmillPrototype()
{
    this->setType("Treadmill");
}

TreadmillPrototype::TreadmillPrototype(const TreadmillPrototype& other)
{
    this->setType(other.getType());
}

EquipmentPrototype* TreadmillPrototype::clone() const
{
    return new TreadmillPrototype(*this);
}