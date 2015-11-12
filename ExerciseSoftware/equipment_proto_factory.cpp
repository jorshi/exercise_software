//
//  equipment_proto_factory.cpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include "equipment_proto_factory.hpp"

EquipmentProtoFactory::EquipmentProtoFactory()
{
    this->_bike = new BikePrototype;
    this->_treadmill = new TreadmillPrototype;
}

EquipmentPrototype* EquipmentProtoFactory::getBike()
{
    return _bike->clone();
}