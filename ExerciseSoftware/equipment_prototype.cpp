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
    this->type = t;
}

std::string EquipmentPrototype::getType()
{
    return this->type;
}