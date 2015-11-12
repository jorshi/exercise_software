//
//  equipment_prototype.cpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include "equipment_prototype.hpp"
#include <string>

void EquipmentPrototype::setType(std::string t)
{
    _type = t;
}

std::string EquipmentPrototype::getType() const
{
    return _type;
}

void EquipmentPrototype::setId(int i)
{
    _id = i;
}

int EquipmentPrototype::getId() const
{
    return _id;
}