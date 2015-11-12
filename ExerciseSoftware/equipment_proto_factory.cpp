//
//  equipment_proto_factory.cpp
//  ExerciseSoftware
//
//  Created by Jordie Shier  on 2015-11-11.
//  Copyright © 2015 Jordie Shier . All rights reserved.
//

#include <map>
#include "equipment_proto_factory.hpp"

std::map<std::string, EquipmentType> EquipmentProtoFactory::_type;

EquipmentProtoFactory::EquipmentProtoFactory()
{
    this->_bike = new BikePrototype;
    this->_treadmill = new TreadmillPrototype;
    
    this->_type["bike"] = bike;
    this->_type["treadmill"] = treadmill;
    this->_equipmentId = 1;
}


EquipmentPrototype* EquipmentProtoFactory::getEquipment(EquipmentType type)
{
    EquipmentPrototype* newEquipment;
    
    switch (type) {
        case bike:
            newEquipment = _bike->clone();
            break;
        case treadmill:
            newEquipment = _treadmill->clone();
            break;
    }
    
    newEquipment->setId(this->_equipmentId);
    this->_equipmentId++;
    
    return newEquipment;
}

EquipmentType EquipmentProtoFactory::getEquipmentType(std::string type)
{
    if (this->_type.find(type) == this->_type.end()){
        throw 1;
    } else {
        return this->_type[type];
    }
    
}

std::string EquipmentProtoFactory::getTypes()
{
    return "bike, treadmill";
}
